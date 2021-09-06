#include <iostream>
#include "calc.h"

int main(){
    auto calc = new Calculator();

    auto result = calc->Sum(5, 3);

    std::cout << result;

    return 0;
}
