#include <iostream>
using namespace std;

bool IsLeap(int year);

int main(int argc, char const *argv[])
{
    while (true)
    {
        int year = 0;
        cout << "enter year ";
        cin >> year;

        if (year == 0)
            break;

        if (IsLeap(year))
            cout << year << " is leap year" << endl;
        else
            cout << year << " is not leap year" << endl;
    }
    return 0;
}

bool IsLeap(int year)
{
    if (year % 400 == 0)
        return true;

    if (year % 100 == 0)
        return false;

    if (year % 4 == 0)
        return true;

    return false;
}
