Step 1: Compile Source Files into Position-Independent Object Files:

gcc -fPIC -c mylib.c -o mylib.o

Step 2: Create a Static or Shared Library from the Object Files

gcc -shared -o libmylibrary.so mylib.o

Verify the Shared Library
nm -D libmylibrary.so

Step 3: Build the Project
mkdir build
cd build
cmake ..
make