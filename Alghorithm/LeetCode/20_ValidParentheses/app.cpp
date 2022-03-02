#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        string brackets = "";

        for (auto x : s)
        {
            if (x == '(')
                brackets += '(';
            if (x == ')')
                brackets += ')';
            if (x == '[')
                brackets += '[';
            if (x == ']')
                brackets += ']';
            if (x == '{')
                brackets += '{';
            if (x == '}')
                brackets += '}';
        }

        if (brackets.size() % 2 != 0)
            return false;

        int pairs = brackets.size() / 2;

        for (int j = 0; j < pairs; j++)
        {

            int index_to_del = -1;
            for (int i = 0; i < brackets.size() - 1; i++)
                if ((brackets[i] == '[' &&
                     brackets[i + 1] == ']') ||
                    (brackets[i] == '(' &&
                     brackets[i + 1] == ')') ||
                    (brackets[i] == '{' &&
                     brackets[i + 1] == '}'))
                {
                    index_to_del = i;
                    break;
                }
            if (index_to_del >= 0)
                brackets.erase(index_to_del, 2);
        }

        return brackets.size() == 0;
    }
};

int main(int argc, char const *argv[])
{
    Solution sol;

    vector<string> cases{"(dfaf)", "(dfaf", "{AAA}(BBB)","{AAA(  }BBB)", "{(AAA)}" };

    for (auto str : cases)
    {
        string result = sol.isValid(str) ? "true" : "false";
        cout << result << endl;
    }
    return 0;
}
