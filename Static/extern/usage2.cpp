#include "db.hpp"
#include <iostream>

uint32_t myFunction2() {
    return 20;
}

void function2() {
    Singleton::getInstance().setFunction(myFunction2);
    uint32_t result = Singleton::getInstance().callFunction();
    std::cout << "Result from function2: " << result << std::endl;
}