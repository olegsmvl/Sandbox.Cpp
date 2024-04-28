#include <iostream>
using namespace std;

class MyClass{
    public:
    MyClass(){
        cout << "ctor" << endl;
    }
    ~MyClass(){
        cout << "dtor" << endl;
    }
};

int main(int argc, char const *argv[])
{
    //{
        MyClass myClass;
        //auto p = new MyClass();

        //delete p;
        //free(p);
    //}
    return 0;
}
