#include <iostream>
#include "ChildClass.cpp"
using namespace std;

void Method(BaseClass b);

int main(int argc, char const *argv[])
{
    BaseClass* b = new BaseClass();
    ChildClass* cl = new ChildClass();

    // cout << b->id << endl;
    // cout << cl->id << endl;

    Method(*cl);

    return 0;
}

void Method(BaseClass b){
    cout << b.id << endl;
}
