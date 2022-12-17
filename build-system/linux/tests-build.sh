#!/bin/bash
#a script for build the RaumMotor tests

cd ..
rm -rf build
mkdir build
cd build
cmake ../common/
make test-build