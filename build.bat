@echo off

echo [---] Building...
echo .
echo .
cd windows

cmake ../
cmake --build .

echo .
echo .
echo [---] Running...
echo .
echo .
Debug\ascent.exe

cd ..