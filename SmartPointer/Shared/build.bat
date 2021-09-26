rmdir /s /q build
mkdir build
g++ -std=c++14 app.cpp -o build\app.exe
build\app.exe