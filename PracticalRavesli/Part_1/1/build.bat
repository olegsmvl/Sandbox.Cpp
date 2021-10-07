rmdir /s /q build
mkdir build
g++ app.cpp io.cpp -o build\app.exe
build\app.exe