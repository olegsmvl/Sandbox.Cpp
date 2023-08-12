#include <iostream>
using namespace std;

template <typename T>
T sum(T a){
    return a;
}

template <typename T, typename... Args>
T sum(T a, Args... rest){
    sum(a , rest...);
    return a + sum<T>(rest...);
}

int main()
{
    auto r1 = sum(0.5, 1, 0.5, 1);
    cout << r1 << endl;
    auto r2 = sum(1, 0.5, 1, 0.5);
    cout << r2 << endl;
    return 0;
}
