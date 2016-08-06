#!/bin/bash -ex

# clean up
rm -rf cmake_build

# build and install
mkdir cmake_build && cd cmake_build && cmake .. -DCMAKE_CXX_FLAGS="${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage -fPIC -O0" && make && cd -
