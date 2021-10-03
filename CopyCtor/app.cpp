#include <iostream>
using namespace std;

class A
{

private:
public:
    A(int _num)
    {
        num = _num;
        cout << "default ctor" << endl;
    }

    //A(const A &a) = delete;

    A(const A &a)
    {
        cout << "copy ctor" << endl;
        num = a.num;
    }

    int num = 0;
    int sqare()
    {
        return num * num;
    }
};

int cube(A a)
{
    return a.num * a.num * a.num;
}

int main(int argc, char const *argv[])
{
    A a = A(5);
    A b(a);
    cout << b.sqare() << endl;
    cout << cube(b) << endl;
    return 0;
}
