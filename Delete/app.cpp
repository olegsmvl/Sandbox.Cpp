#include <iostream>
using namespace std;

class MyClass{
    public:
     void GetName(){
         cout << "MyClass" << endl;
     }

     MyClass(const MyClass& cl) = delete;
     void operator=(const MyClass&) = delete;

     MyClass(){};
};

int main(int argc, char const *argv[])
{
    MyClass cl1;
    //MyClass cl2 = cl1;
    // auto cl2(cl1);
    // cl2.GetName();
    return 0;
}
