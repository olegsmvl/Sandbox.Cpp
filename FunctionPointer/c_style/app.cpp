#include<iostream>
using namespace std;

void (*message) ();
int (*calc) (int a, int b);
void hello();
void next();
int sum (int a, int b);
int divide (int a, int b);

int main(int argc, char const *argv[])
{
    message = hello;
    message();
    message = next;
    message();

    calc = sum;
    auto result = calc(1,9);
    cout << result << endl;


    calc = divide;
    result = calc(8,2);
    cout << result << endl;

    return 0;
}

void hello(){
    cout << "Hello" << endl;
}

void next(){
    cout << "Next" << endl;
}

int sum (int a, int b){
    return a + b;
}

int divide (int a, int b){
    return a / b;
}