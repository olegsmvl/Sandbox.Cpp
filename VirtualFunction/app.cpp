#include<iostream>
#include "BaseClass.cpp"
#include "Child.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
    Child* cl = new Child();
    cout << sizeof(*cl) << endl;
    size_t* vPtr = (size_t*)cl; 
    cout << cl << endl;
    cout << vPtr << endl;
    cout << *vPtr << endl;
    //size_t* vTable = *vPtr;
    auto result = cl -> who_i_am();
    cout << result << endl;
    auto result_new = ((BaseClass*)cl)->who_i_am();
    cout << result_new << endl;
    return 0;
}
