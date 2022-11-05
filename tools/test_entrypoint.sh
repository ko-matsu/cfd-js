#!/bin/sh -l

ls

npm install

# for alpine
export LD_LIBRARY_PATH="./build/Release:$LD_LIBRARY_PATH"

npm run test
