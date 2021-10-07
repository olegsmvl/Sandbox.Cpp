#include <iostream>
using namespace std;

namespace constants
{
    const double gravity = 9.81;
    int getG();
}

int main(int argc, char const *argv[])
{
    cout << constants::gravity << endl;
    cout << constants::getG() << endl;
    return 0;
}

namespace constants
{
    int getG()
    {
        return 10;
    }
}