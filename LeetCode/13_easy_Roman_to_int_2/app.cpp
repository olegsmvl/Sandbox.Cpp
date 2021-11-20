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
        const unordered_map<string, int> digits{
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
            string symbols = "";

            if (i < s.size() - 1)
            {
                symbols = s.substr(i, 2);
                auto iter = digits.find(symbols);

                if (iter != digits.end())
                {
                    result += iter->second;
                    i += 2;
                    continue;
                }
            }

            symbols = s.substr(i, 1);
            auto iter = digits.find(symbols);
            result += iter->second;
            i++;
        }

        return result;
    }
};

int main(int argc, char const *argv[])
{
    vector<string> cases{"III", "IV", "IX", "LVIII", "MCMXCIV"};
    Solution sol;

    for (auto str : cases)
    {
        int result = sol.romanToInt(str);
        cout << str << ": ";
        cout << result << endl;
    }
    return 0;
}
