#include <iostream>
#include <functional>
using namespace std;

void print(){
    cout << "this!" << endl;
}

void print_num(int num){
    cout << "this! -> " << num << endl;
}

void func(std::function<void()> f){
    f();
}

void func_arg(std::function<void(int)> f, int value){
    f(value);
}

int main()
{
    std::function<void(int)> f1 = print_num;
    f1(5);
    func(print);
    func_arg(print_num, 10);
    return 0;
}
