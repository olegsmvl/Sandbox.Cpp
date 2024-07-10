#include <iostream>
using namespace std;

class MyClass{
    public:
    void operator()(int num){
        cout << "oper " << num << endl;
    }
};

int main(int argc, char const *argv[])
{
    MyClass cl;
    cl(5);
    return 0;
}
