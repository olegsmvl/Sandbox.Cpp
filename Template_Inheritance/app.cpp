#include <iostream>
#include "BaseClass.h"
#include "ChildClass.h"
using namespace std;

int main(int argc, char const *argv[])
{
    BaseClass<int> bc(24);
    bc.field = 15;
    cout << bc.Id << endl;

    ChildClass<float> cc(2);
    cout << cc.Id << endl;
    cc.child_field = 0;
    cc.field = 1.5;
    cout << cc.child_field << endl;
    cout << cc.field << endl;
    return 0;
}
