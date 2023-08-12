#include <iostream>
using namespace std;

class A{
 public:
    virtual void f(){
        cout << "class A" << endl;
    }
};

class B: public A{
    void f(){
        cout << "class B" <<  endl;
    }
};

void check(A& obj){
    obj.f();
}

int main()
{
    A a; 
    B b; 
    check(b);
    return 0;
}
