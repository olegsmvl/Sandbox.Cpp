#include <iostream>
#include "BaseClass.h"
#include "ChildClass.h"
using namespace std;

int main(int argc, char const *argv[])
{
    BaseClass<int> bc(24);
    bc.field = 15;
    cout << bc.Id << endl;

    ChildClass cc(2);
    cout << cc.Id << endl;
    return 0;
}
