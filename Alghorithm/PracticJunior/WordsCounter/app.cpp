#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    const string str = "one  two  three f ";
    const char delimiter = ' ';

    int counter = 0;

    for (auto p = str.begin(); p != str.end(); p++)
    {
        if (*p != delimiter && (*(p+1) == delimiter || p+1 == str.end()) )
            counter++;
    }

    // for (auto x : str )
    //     cout << x << endl;

    cout << "count of words: " << counter << endl;

    return 0;
}
