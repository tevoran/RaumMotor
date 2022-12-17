# Build System Design Document

The build system tries to split the platform dependent part and the platform independent part. As well it provides scripts for making its usage as easy as possible.

The base of the build system is CMake.

## Platform Indepentend Part

The build system sets the C++ standard to C++-20 and includes all the necessary header only libraries. It also tries to provide to add a simple build test. If that builds every dependency of the engine should work as well.

## Platform Dependant Part

### Linux

There are scripts to make the compilation and testing as comfortable under Linux as possible.

Right now it is possible to simply execute the ```tests-build.sh``` script to build the build test. It can be executed by calling the ```tests-run.sh``` script.
