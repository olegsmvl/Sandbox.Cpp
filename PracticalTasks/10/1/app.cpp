#include <iostream>
#include <Windows.h>
using namespace std;

int main(int argc, char const *argv[])
{
    system("chcp 65001 > nul");

    double weight_pound  = 0;
    cout << "введите вес в фунтах: ";
    cin >> weight_pound;
    cout << "вес в кг: " << weight_pound * 0.453 << endl;
    return 0;
}
