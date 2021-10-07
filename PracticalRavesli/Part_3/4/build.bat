rmdir /s /q build
mkdir build
g++ -std=c++98 app.cpp -o build\app.exe
build\app.exe