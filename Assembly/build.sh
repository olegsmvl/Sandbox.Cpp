if [ -d build ] 
then
    rm -r build
fi

mkdir build
g++ -O0 -fno-omit-frame-pointer -o build/app.s -S app.cpp
g++ -std=c++11  -O0 -fno-omit-frame-pointer app.cpp -o build/app
