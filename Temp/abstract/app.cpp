#include <iostream>
using namespace std;

class IClass{
    public:
        int A = 10;
        virtual void work() = 0;
        void main_task (){
            cout << "main task" << endl;
        }
};

class MyClass : public IClass{
    public:
        //int A = 5;
        int B = 11;
        void work() override{
            cout << A +B << endl;
        }
};

int main(){
    MyClass m;
    m.work();
    m.main_task();

    cout << sizeof(MyClass) << endl;
    cout << alignof(MyClass) << endl;

    return 0;
}