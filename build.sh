#!/usr/bin/bash

rm -rf build

mkdir build && cd build

cmake -DBUILD_TESTS=ON ..

cmake --build .

./test_matrix.exe