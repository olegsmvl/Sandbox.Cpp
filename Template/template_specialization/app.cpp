#include <iostream>
using namespace std;

template<typename T>
struct MyClass{
    T value;
};

template<>
struct MyClass<int>{
    int value = 6;
};

int main(int argc, char const *argv[])
{
    MyClass<int> t;
    // t.value = 5;

    cout << t.value << endl;
    return 0;
}
