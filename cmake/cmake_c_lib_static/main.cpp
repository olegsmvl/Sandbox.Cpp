// main.cpp
#include <iostream>

extern "C" {
    #include "mylib.h"
}

int main() {
    std::cout << "Calling C function from C++:" << std::endl;
    my_function();
    return 0;
}
