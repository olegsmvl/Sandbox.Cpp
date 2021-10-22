#include <iostream>
using namespace std;

void func(int* a){
    cout << a[0] << endl;
    cout << a[1] << endl;
}


int main(int argc, char const *argv[])
{
    int f = 5;
    func(&f);
    return 0;
}
