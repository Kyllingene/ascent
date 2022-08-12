#!/usr/bin/bash

echo -e "[---] Building...\n\n"
cd linux

cmake ../
cmake --build .

echo -e "\n\n[---] Running...\n\n"
./ascent

cd ..