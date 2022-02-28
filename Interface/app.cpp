#include <iostream>
#include "IBase.h"
#include "MyClass.h"
using namespace std;

void doing(IBase &cl){
    cl.PrintName();
}

int main(int argc, char const *argv[])
{
    MyClass mc;
    doing(mc);
    return 0;
}
