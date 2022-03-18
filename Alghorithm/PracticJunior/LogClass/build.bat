rmdir /s /q build
mkdir build
g++ app.cpp -o build\app.exe -static
cd build
app.exe
cd ..