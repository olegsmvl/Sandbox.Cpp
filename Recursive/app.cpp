#include<iostream>
using namespace std;

void Call(int a){
    if (a < 0) return;

    cout << a << endl;
    a--;
    Call(a);
}

int main(int argc, char const *argv[])
{
    Call(5);
    return 0;
}
