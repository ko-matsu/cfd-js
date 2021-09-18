#!/bin/bash -u

# while :; do sleep 10; done
export WORKDIR_ROOT=github
export WORK_DIR=workspace
export WORKDIR_PATH=/${WORKDIR_ROOT}/${WORK_DIR}

if [ ! -d ${WORKDIR_ROOT} ]; then
  mkdir ${WORKDIR_ROOT}
fi

cd /${WORKDIR_ROOT}
if [ ! -d ${WORK_DIR} ]; then
  mkdir ${WORK_DIR}
fi

cd ${WORKDIR_PATH}

if [ -d node_modules ]; then
  rm -rf node_modules
fi
mkdir node_modules
chmod 777 node_modules
rm -rf package-lock.json

node --version
npm install
npm outdated
rm -rf node_modules
