#include <iostream>
using namespace std;

class A{
    public:
    int value;
    A(int _value): value(_value){};
    A(){}

    A operator-(const A &a){
        return A(value - a.value);
    }

    void operator=(const int val){
        value = val;
    }
};

A operator+(const A &a, const A &b){
    return A(a.value + b.value);
}

int main(int argc, char const *argv[])
{
    A c = A(9) - A(5);
    cout << c.value << endl;

    A d;
    d = 10;

    cout << d.value << endl;

    return 0;
}
