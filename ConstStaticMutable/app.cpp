#include <iostream>
#include "A.cpp"
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


    return 0;
}