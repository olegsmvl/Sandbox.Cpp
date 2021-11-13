#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "ctor" << endl;
        //throw 11;
    }

    ~A()
    {
        cout << "dtor" << endl;
    }

    void calc()
    {
        cout << "calc" << endl;
        throw 10;
    }
};

int main(int argc, char const *argv[])
{
    cout << "start programm" << endl;
    try
    {
        A a;
        cout << "call calc" << endl;
        a.calc();
    }
    catch(int code){
        cout << "error occured type " << code << endl;
    }
    cout << "end programm" << endl;

    return 0;
}
