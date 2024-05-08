rmdir /s /q build
mkdir build
g++ -std=c++11 -pthread app.cpp -o build\app.exe
build\app.exe

:: for mingw need to uncomment _GLIBCXX_HAS_GTHREADS in config.h in folder mingw. 
:: Exactly need write #define _GLIBCXX_HAS_GTHREADS bellow this line 
:: but it cann't work anyway. I did not find solution for mingw