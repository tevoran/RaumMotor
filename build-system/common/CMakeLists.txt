cmake_minimum_required(VERSION 3.16)
project("RaumMotor")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#vendor header only library dependencies
include_directories(../../vendor/glm)
include_directories(../../vendor/stb)

#build test
file(GLOB_RECURSE "test-build" SRC ../../tests/build/*.cpp)
add_executable(test-build WIN32 ${test-build})