rm -r build
mkdir build
g++ -std=c++2a app.cpp -pthread -o build/app 
build/app