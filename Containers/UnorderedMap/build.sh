rm -r build
mkdir build
g++ -std=c++11 app3.cpp -pthread -o build/app 
build/app