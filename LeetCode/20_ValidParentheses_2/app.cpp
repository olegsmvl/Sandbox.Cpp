#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;

class Solution
{
private:
    unordered_map<char, char> mapping;
    stack<char> brackets;

public:
    Solution()
    {
        mapping.insert({'(', ')'});
        mapping.insert({'{', '}'});
        mapping.insert({'[', ']'});
    }

    bool isValid(string s)
    {

        for (char c : s)
        {
            if (mapping.count(c) != 0)
            {
                brackets.push(c);
            }
            else
            {
                if (brackets.empty())
                    return false;
                char open = brackets.top();
                brackets.pop();
                if (mapping.find(open)->second != c)
                    return false;
            }
        }

        return brackets.empty();
    }
};

int main(int argc, char const *argv[])
{
    Solution sol;

    vector<string> cases{"()", "(", "{}()", "{(})", "{()}"};

    for (auto str : cases)
    {
        string result = sol.isValid(str) ? "true" : "false";
        cout << result << endl;
    }
    return 0;
}
