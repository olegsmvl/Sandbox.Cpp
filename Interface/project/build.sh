if [ -d build ] 
then
    rm -r build
fi

mkdir build
g++ -std=c++11 app.cpp  initialization.cpp -pthread -o build/app 
build/app
