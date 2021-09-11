rmdir /s /q build
mkdir build
g++ -std=c++11 app.cpp -pthread -o build\app.exe 
build\app.exe