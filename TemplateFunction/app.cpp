#include <iostream>
#include <string>
#include "MyClass.cpp"
using namespace std;

template<typename T>
T add (T a, T b){
    return a+b;
}

int main(int argc, char const *argv[])
{
    auto result = add<int>(5, 7);
    cout << result << endl;

    auto result_new = add<string>( "some", "text");
    cout << result_new << endl;

    auto cl = new MyClass(5);

    return 0;
}
