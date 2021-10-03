#include <iostream>
#include "BaseClass.cpp"
#include "ChildClass.cpp"
using namespace std;

void Method(BaseClass b);

void test1();
void test2();

int main(int argc, char const *argv[])
{
    // test1();
    test2();

    return 0;
}

void test2()
{
    auto a = new ChildClass();
    delete a;
}

void test1()
{
    BaseClass *b = new BaseClass();
    ChildClass *cl = new ChildClass();

    // cout << b->id << endl;
    // cout << cl->id << endl;

    Method(*cl);
}

void Method(BaseClass b)
{
    cout << b.id << endl;
}
