#!/bin/bash -u

# while :; do sleep 10; done
export WORKDIR_ROOT=workspace/workdir
export WORKDIR_PATH=/workspace/workdir

if [ ! -d ${WORKDIR_PATH} ]; then
  mkdir ${WORKDIR_PATH}
fi

cd /${WORKDIR_ROOT}
rm -rf bitcoind_datadir
rm -rf elementsd_datadir

mkdir bitcoind_datadir
chmod 777 bitcoind_datadir
# cp /root/.bitcoin/bitcoin.conf bitcoind_datadir/
cp ./wrap_js/__integration_test__/bitcoin.conf bitcoind_datadir/
mkdir elementsd_datadir
chmod 777 elementsd_datadir
# cp /root/.elements/elements.conf elementsd_datadir/
cp ./wrap_js/__integration_test__/elements.conf elementsd_datadir/

# boot daemon
bitcoind --regtest -datadir=${WORKDIR_PATH}/bitcoind_datadir
bitcoin-cli --regtest -datadir=${WORKDIR_PATH}/bitcoind_datadir ping > /dev/null 2>&1
while [ $? -ne 0 ]
do
  bitcoin-cli --regtest -datadir=${WORKDIR_PATH}/bitcoind_datadir ping > /dev/null 2>&1
done
echo "start bitcoin node"
bitcoin-cli --regtest -datadir=${WORKDIR_PATH}/bitcoind_datadir createwallet wallet false false "" false false

elementsd -chain=liquidregtest -datadir=${WORKDIR_PATH}/elementsd_datadir -pak=02b6991705d4b343ba192c2d1b10e7b8785202f51679f26a1f2cdbe9c069f8dceb024fb0908ea9263bedb5327da23ff914ce1883f851337d71b3ca09b32701003d05
elements-cli -chain=liquidregtest -datadir=${WORKDIR_PATH}/elementsd_datadir ping > /dev/null 2>&1
while [ $? -ne 0 ]
do
  elements-cli -chain=liquidregtest -datadir=${WORKDIR_PATH}/elementsd_datadir ping > /dev/null 2>&1
done
elements-cli -chain=liquidregtest -datadir=${WORKDIR_PATH}/elementsd_datadir createwallet wallet false false "" false false

echo "start elements node"

set -e

clrFlg="true"
if [ $# -gt 0 ]; then
  echo "param: $1"
  if [ "$1" = "cache" ]; then
    clrFlg="false"
  fi
fi
echo "clrFlg: $clrFlg"

if [ "$clrFlg" = "true" ]; then
  if [ -d node_modules ]; then
    rm -rf node_modules
  fi
  mkdir node_modules
  chmod 777 node_modules
fi

node --version

if [ "$clrFlg" = "true" ]; then
  npm install
  npm run cmake_release_parallel
fi

NODE_MAJOR_VER=$(node --version | sed -r 's/^v([0-9]+).([0-9]+).([0-9]+)(\..*)?$/\1/')
NODE_MINOR_VER=$(node --version | sed -r 's/^v([0-9]+).([0-9]+).([0-9]+)(\..*)?$/\2/')
if [ $NODE_MAJOR_VER -gt 18 ]; then
  echo "node version $NODE_MAJOR_VER" ;
  NODE_OPTIONS="--no-experimental-fetch" npm run elements_test ;
elif test "$NODE_MAJOR_VER" = "18" && test "$NODE_MINOR_VER" != "0"; then
  echo "node version $NODE_MAJOR_VER.$NODE_MINOR_VER" ;
  NODE_OPTIONS="--no-experimental-fetch" npm run elements_test ;
else
  npm run elements_test
fi

if [ "$clrFlg" = "true" ]; then
  rm -rf node_modules
fi
