if [ -d build ] 
then
    rm -r build
fi

mkdir build
gcc can_bus.c -o build/app
build/app
