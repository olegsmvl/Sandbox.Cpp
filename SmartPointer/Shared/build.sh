rm -r build
mkdir build
g++ -std=c++14 app.cpp -pthread -o build/app 
build/app