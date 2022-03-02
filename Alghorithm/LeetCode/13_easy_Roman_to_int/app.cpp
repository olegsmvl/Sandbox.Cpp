#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int result = 0;
        int digit = 0;
        int previousDigit = 0;

        for (auto x : s)
        {
            switch (x)
            {
            case 'I':
                digit = 1;
                break;

            case 'V':
                digit = 5;
                break;

            case 'X':
                digit = 10;
                break;

            case 'L':
                digit = 50;
                break;

            case 'C':
                digit = 100;
                break;

            case 'D':
                digit = 500;
                break;

            case 'M':
                digit = 1000;
                break;

            default:
                cout << "wrong input" << endl;
                break;
            }

            if ((digit == 5) && (previousDigit == 1))
                result += 3;
            else if ((digit == 10) && (previousDigit == 1))
                result += 8;
            else if ((digit == 50) && (previousDigit == 10))
                result += 30;
            else if ((digit == 100) && (previousDigit == 10))
                result += 80;
            else if ((digit == 500) && (previousDigit == 100))
                result += 300;
            else if ((digit == 1000) && (previousDigit == 100))
                result += 800;
            else
                result += digit;

            previousDigit = digit;
        }

        return result;
    }
};

int main(int argc, char const *argv[])
{
    vector<string> cases{"III", "IV", "IX", "LVIII", "MCMXCIV"};
    Solution sol;

    for (auto str : cases){
        int result = sol.romanToInt(str);
        cout << str << ": ";
        cout << result << endl;
    }
    return 0;
}
