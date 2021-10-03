#include <iostream>
using namespace std;

class A
{
    public:
    A(){
        cout << "ctor A" << endl;
        init();
    }
    virtual void print() = 0;
    private:
    void init(){
        print();
    }
};

class B : public A{
    public:
    B(){
        print();
    }
    void print() {
        cout << "print method" << endl;
    }
};

int main(int argc, char const *argv[])
{
    //A cl;
    B* cl = new B();
    cl->print();

    return 0;
}
