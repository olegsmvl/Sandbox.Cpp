#include <iostream>
 
double divide(int, int);
 
int main()
{
    int x = 500;
    int y = 0;
    try
    {
        double z = divide(x, y);
        std::cout << z << std::endl;
    }
    catch (const char* msg)
    {
        std::cout << msg << std::endl;
    }
    std::cout << "The End..." << std::endl;
    return 0;
}

double divide(int a, int b)
{
    if (b == 0)
        throw "Division by zero!";
    return a / b;
}