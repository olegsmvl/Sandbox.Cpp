#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        vector<int> digits;

        do
        {
            int digit = x % 10;
            digits.push_back(digit);
            x = x / 10;
        }while (x > 0);

        for (int i = 0; i < digits.size() / 2; i++)
            if (digits[i] != digits[digits.size() - 1 - i])
                return false;

        return true;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> test_values{12345, 1111, 111, 10, 55555, 123, 1234, 101};
    Solution sol;

    for (int x : test_values)
    {
        bool result = sol.isPalindrome(x);
        cout << x << " - " << "\t" << result << endl;
    }
    return 0;
}
