#include<iostream>
#include "BaseClass.cpp"
#include "Child.cpp"
using namespace std;

void test1();
void test2();

int main(int argc, char const *argv[])
{
    //test1();
    test2();
    return 0;
}

void test2(){
    BaseClass* cl = new Child();
}

void test1(){
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
}
