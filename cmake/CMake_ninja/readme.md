mkdir build
cd build/
cmake -G Ninja ..
ninja
sudo ninja install
sudo cpack