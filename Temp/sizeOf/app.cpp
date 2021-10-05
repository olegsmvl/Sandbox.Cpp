#include <iostream>
using namespace std;

class A{
    public:
    int id;
    void Print(){
        cout << id << endl;
    }
};

int main(int argc, char const *argv[])
{
    A a();
    cout << sizeof(A) << endl; 
    return 0;
}
