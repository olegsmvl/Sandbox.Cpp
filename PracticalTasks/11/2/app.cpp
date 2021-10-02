#include <iostream>
#include <Windows.h>
using namespace std;

int main(int argc, char const *argv[])
{
    system("chcp 65001 > nul");

    double stependia = 50;
    double expenses = 60;
    double total = 0;

    for (int i = 0 ; i<10 ; i++){

    }

    double weight_pound  = 0;
    cout << "введите вес в фунтах: ";
    cin >> weight_pound;
    cout << "вес в кг: " << weight_pound * 0.453 << endl;
    return 0;
}
