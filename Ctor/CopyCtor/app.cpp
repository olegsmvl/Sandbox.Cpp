#include <iostream>
using namespace std;

class A
{

private:
public:
    int num = 0;

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

    A operator=(const A &a)
    {
        cout << "= operator" << endl;
        return *this;
    }

    ~A()
    {
        cout << "dtor" << endl;
    }

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
    A c = b;
    c = a;
    cout << b.sqare() << endl;
    cout << cube(b) << endl;
    return 0;
}
