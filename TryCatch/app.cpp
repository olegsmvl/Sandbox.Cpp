#include <iostream>
#include "test1.cpp"
using std::cout;
using std::endl;

//https://habr.com/ru/post/59349/

class MyClass
{
    int num;

public:
    MyClass(int _num) : num(_num)
    {
        cout << "start ctor myclass " << num << endl;
        if (_num == 0)
            throw "must be not zero";
        cout << "end ctor myclass " << num << endl;
    }
    ~MyClass()
    {
        cout << "dtor myclass " << num << endl;
    }
};

class Creator
{
private:
    MyClass *m1;
    MyClass *m2;

public:
    Creator(int a, int b)
    {
        cout << "start ctor creator " << endl;
        m1 = new MyClass(a);
        m2 = new MyClass(b);
        cout << "end ctor creator " << endl;
    }
};

void test2();

int main()
{
    //test1();
    test2();
    return 0;
}

void test2()
{
    try
    {
        Creator cr(1, 0);
    }
    catch (...)
    {
        cout << "error" << endl;
    }
}
