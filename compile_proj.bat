cmake -G Ninja -B build
cmake --build ./build --config release
cd build/test
movableObject-bench.exe
cd ../..
pause
