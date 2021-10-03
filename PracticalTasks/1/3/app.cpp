#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    while (true)
    {
        /* code */

        int month = 0;
        cout << "enter month: ";
        cin >> month;

        if (month <= 0 || month > 12)
        {
            cout << "error!!!" << endl;
            continue;
        }

        if (month >= 1 && month <= 2 || month == 12)
            cout << "winter" << endl;

        if (month >= 3 && month <= 5)
            cout << "spring" << endl;

        if (month >= 6 && month <= 8)
            cout << "summer" << endl;

        if (month >= 9 && month <= 11)
            cout << "autumn" << endl;
    }

    return 0;
}
