#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<string>> Solve(vector<string> &words)
    {
        unordered_map<string, vector<string>> groups;

        for (auto word : words){
            string key = word;
            sort(key.begin(), key.end());
            groups[key].push_back(word);
        }

        vector<vector<string>>  result;

        for (auto group : groups){
            result.push_back(group.second);
        }

        return result;
    }
};


int main()
{
    Solution sl;
    vector<string> words = {"eat", "tea", "tan", "ate", "nat", "bat"} ;


    auto result = sl.Solve(words);
    for (auto x : result){
        for (auto s : x)
            cout << s << " ";
        cout << endl;
    }


    return 0;
}