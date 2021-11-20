#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string test_common_prefix = "";
        string common_prefix = "";
        int count_symbols = 1;

        while (true)
        {
            if (count_symbols > strs[0].size())
                break;

            test_common_prefix = strs[0].substr(0, count_symbols);

            for (int j = 1; j < strs.size(); j++)
            {
                if (count_symbols > strs[j].size())
                    return common_prefix;

                if (strs[j].substr(0, count_symbols) != test_common_prefix)
                    return common_prefix;
            }
            common_prefix = test_common_prefix;
            count_symbols++;
        }

        return common_prefix;
    }
};

int main(int argc, char const *argv[])
{
    vector<string> strs1{"flower", "flow", "flight"};
    vector<string> strs2{"dog", "racecar", "car"};

    vector<vector<string>> cases{strs1, strs2};

    Solution sol;

    for (auto strs : cases)
    {
        auto result = sol.longestCommonPrefix(strs);
        cout << "result: " << result << endl;
    }

    return 0;
}
