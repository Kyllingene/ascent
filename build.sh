#!/usr/bin/bash

echo "[---] Building...\n\n"
cd linux

cmake ../
cmake --build .

echo "[---] Running...\n\n"
./ascent

cd ..