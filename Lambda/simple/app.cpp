#include <iostream>
using namespace std;

int main()
{
    int mult = 100;

    auto func = [mult](int a , int b)-> int{ return mult * a * b;};
    int result = func(5,3);
    cout << result << endl;
    return 0;
}
