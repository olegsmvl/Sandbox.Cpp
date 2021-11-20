#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        //
        const unordered_map<string,int> digits{
            {"I", 1},
            {"V", 5},
            {"X", 10},
            {"L", 50},
            {"C", 100},
            {"D", 500},
            {"M", 1000},
            {"IV", 4},
            {"IX", 9},
            {"XL", 40},
            {"XC", 90},
            {"CD", 400},
            {"CM", 900},
        };
        

        //
        int result = 0;
        int digit = 0;
        int previousDigit = 0;

        int i = 0;

        while (i < s.size())
        {
            string x = s.substr(i,1);

            digit = digits.find(x)->second;

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

            i++;
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
