Step 1: Compile mylib.c into an object file:

gcc -c mylib.c -o mylib.o

Step 2: Create a Static or Shared Library from the Object Files
ar rcs libmylib.a mylib.o

Step 3: Build the Project
mkdir build
cd build
cmake ..
make