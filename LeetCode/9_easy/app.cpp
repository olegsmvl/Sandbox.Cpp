#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        cout << "number: " << x << endl;
        int digit = x % 10;
        x = x / 10;
        vector<int> digits;
        digits.push_back(digit);

        while (x >= 10)
        {
            digit = x % 10;
            digits.push_back(digit);
            x = x / 10;
        }

        cout << "digits: " ;

        for (int dig : digits)
            cout << dig << " ";

        for (int i = 0; i < digits.size() / 2; i++)
        {
            cout << digits[i] << " ";
            if (digits[i] != digits[digits.size() - i]){
                cout << endl;
                return false;
            }
        }

        cout << endl;
        return true;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> test_values{12345, 10, 15, 101, 222};
    Solution sol;

    for (int x : test_values)
    {
        bool result = sol.isPalindrome(x);
        cout << x << " - "<< result << endl;
    }
    return 0;
}
