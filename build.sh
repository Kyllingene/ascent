echo "[---] Building...\n\n"
cd linux
cmake --build .

echo "[---] Running...\n\n"
./ascent

cd ..