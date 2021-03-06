#include <iostream>
using std::cout;
using std::endl;

double divide(int a, int b)
{
    if (b == 0)
        throw "Division by zero!";
    return a / b;
}

void test1()
{
    int x = 500;
    int y = 0;
    try
    {
        double z = divide(x, y);
        cout << z << endl;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }

    cout << "The End..." << endl;
}