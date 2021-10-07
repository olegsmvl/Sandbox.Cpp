#include <iostream>
#include "io.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int num1 = readNumber();
    int num2 = readNumber();
    writeAnswer(num1 + num2);
    return 0;
}
