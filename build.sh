set -e
mkdir -p build/
cd build/
cmake ..
cmake --build .
./my_project