#!/bin/bash -u

# while :; do sleep 10; done
export WORKDIR_ROOT=workspace/workdir
export WORKDIR_PATH=/workspace/workdir

if [ ! -d ${WORKDIR_PATH} ]; then
  mkdir ${WORKDIR_PATH}
fi

cd /${WORKDIR_ROOT}

if [ -d node_modules ]; then
  rm -rf node_modules
fi
mkdir node_modules
chmod 777 node_modules

node --version
npm --version

npm install
npm run cmake_release_parallel
