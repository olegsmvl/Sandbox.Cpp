#include <iostream>
#include "IBase.h"
#include "ChildClass.h"
using namespace std;

int main(int argc, char const *argv[])
{
    ChildClass<float> cc(2);
    cout << cc.Id << endl;
    cc.child_field = 10.5;
    //cout << cc.child_field << endl;
    cout << "field = " << cc.getField() << endl;
    return 0;
}
