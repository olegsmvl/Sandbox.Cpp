#include <iostream>
using namespace std;

template<typename T>
void print(T&& arg){
    cout << "received: " << arg << endl;
}

template<typename T>
void func(T&& arg){
    print(std::forward<T>(arg));
}

int main()
{
    func(1.4);
    int x = 5;
    func(x);
    return 0;
}
