#include "db.hpp"
#include <iostream>

uint32_t myFunction1() {
    return 10;
}

void function1() {
    Singleton::getInstance().setFunction(myFunction1);
    uint32_t result = Singleton::getInstance().callFunction();
    std::cout << "Result from function1: " << result << std::endl;
}