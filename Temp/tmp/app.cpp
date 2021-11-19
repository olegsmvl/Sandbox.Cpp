#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int x = 11111;

    int revertedNumber = 0;

    while (x > revertedNumber)
    {
        revertedNumber = revertedNumber * 10 + x % 10;
        x /= 10;
        cout << "x: " << x << endl;
        cout << "revertedNumber" << revertedNumber << endl;
    }

    return 0;
}
