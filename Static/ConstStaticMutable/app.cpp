#include <iostream>
#include "A.cpp"
#include "B.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
    A a;
    A a2;
    a2.inc_number();
    const A a3;
    cout << a.getNumber() << endl;
    cout << a3.getAge() << endl;
    a3.setLength(3500);
    cout << a3.getLength() << endl;

    B b;

    cout << "===========" << endl;

    cout << A::staticGetNumber() << endl;
    A::number = 5;
    cout << A::staticGetNumber() << endl;

    return 0;
}
