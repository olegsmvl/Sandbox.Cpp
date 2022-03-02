#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        return check(s, t) && check(t, s);
    }

private:
    bool check(string s, string t)
    {
        bool result = false;

        unordered_map<char, char> m;

        for (int i = 0; i < s.size(); i++)
        {
            auto iter = m.find(s[i]);
            if (iter == m.end())
            {
                m[s[i]] = t[i];
                result = true;
            }
            else
            {
                if (iter->second != t[i])
                    return false;
            }
        }

        return result;
    }
};

int main()
{
    string s = "badc";
    string t = "baba";
    Solution sl;
    bool result = sl.isIsomorphic(s, t);

    cout << "result: " << result << endl;
    return 0;
}
