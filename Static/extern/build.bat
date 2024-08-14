rmdir /s /q build
mkdir build
g++ app.cpp db.cpp -o build\app.exe
build\app.exe