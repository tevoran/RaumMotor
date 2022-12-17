#!/bin/bash
#a script for running the RaumMotor tests
#success = 0
#error = 1

./../build/test-build
if [ $? != 0 ]
then
	echo error in build test
	exit 1
fi