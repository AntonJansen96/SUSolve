#!/bin/bash

if [ -d "build" ]; then 
    echo "Removing prevous build directory...";
    rm -r build;
fi

mkdir build
cd build

cmake ..
make -j
make test

cd ..
