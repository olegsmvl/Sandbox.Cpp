#include <iostream>
using namespace std;


int calc(int a, int b){
    return a + b;
}

void func(int&& num){
    cout << num << endl;
}

int main()
{
    func(calc(15,7));
    return 0;
}
