#include <iostream>
using namespace std;

class A
{
public:
    int id = 0;
    A()
    {
        cout << "A ctor" << endl;
    }

    virtual void who_i_am()
    {
        cout << "class A" << endl;
    }
};

class B : virtual public A
{
public:
    B()
    {
        cout << "B ctor" << endl;
        id = 1;
    }
    // void who_i_am() 
    // {
    //     cout << "class B" << endl;
    // }
};

class C : virtual public A
{
public:
    C()
    {
        cout << "C ctor" << endl;
        id = 2;
    }
    // void who_i_am() 
    // {
    //     cout << "class C" << endl;
    // }
};

class D : public B, public C
{
public:
    D()
    {
        cout << "D ctor" << endl;
    }
};

int main(int argc, char const *argv[])
{
    D d;
    //((B)d).who_i_am();
    d.who_i_am();
    //cout << d.id << endl;
    return 0;
}
