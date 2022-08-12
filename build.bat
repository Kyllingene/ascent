@echo off

echo "[---] Building...\n\n"
cd windows

cmake ../
cmake --build .

echo "[---] Running...\n\n"
Debug\ascent.exe

cd ..