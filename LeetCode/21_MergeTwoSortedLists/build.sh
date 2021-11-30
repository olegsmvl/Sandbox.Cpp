rm -r build
mkdir build
g++ -std=c++11 app.cpp -pthread -o build/app 
build/app