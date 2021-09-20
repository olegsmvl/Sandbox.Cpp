#include<iostream>
#include "BaseClass.cpp"
#include "Child.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
    Child* cl = new Child();
    auto result = cl -> who_i_am();
    cout << result << endl;
    auto result_new = ((BaseClass*)cl)->who_i_am();
    cout << result_new << endl;
    return 0;
}
