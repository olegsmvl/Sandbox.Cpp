#include <iostream>
#include <string>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string str = "sssome tttext";

    // for (auto &x : str)
    //     x = 'x';

    auto iter = str.begin();

    char previous = '\0';
    string word = "";

    while (iter != str.end())
    {
        if (previous != *iter)


        if (previous == *iter)
            cout << *iter << endl;
        previous = *iter;
        iter++;
        // cout << *(iter++) << endl;
        // cout << *iter << endl;
        // iter++;
    }
    


    // for (auto x : str)
    //     cout << x << endl;

    return 0;
}
