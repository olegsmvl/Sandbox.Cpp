#include <iostream>
using namespace std;

class A{
public:
    int a = 5;
};

class B {
    virtual void some_f(){};
    virtual void some_2(){};
    virtual void some_3(){};
};

class C: public A{
public:
    int c = 5;

    void print(){
        cout << &a << endl;
        cout << &c << endl;
    }
};

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 8;
    int c = 8;

    auto c1 = new C();
    cout << c1 << endl;
    c1 -> print(); 


    // cout << sizeof(A) << endl;
    // cout << sizeof(B) << endl;
    // cout << sizeof(C) << endl;
    return 0;
}
