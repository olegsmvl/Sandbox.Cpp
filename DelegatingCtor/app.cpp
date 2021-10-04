#include <iostream>
using namespace std;

class A
{
public:
    int id;
    A()
    {
        cout << "default ctor" << endl;
    }
    A(int _id) : A()
    {
        cout << "second ctor" << endl;
    }
};

int main(int argc, char const *argv[])
{
    A a(5);
    return 0;
}
