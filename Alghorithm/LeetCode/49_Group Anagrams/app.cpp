#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    vector<vector<string>> result;
    unordered_map<string, vector<string>> m;
    for (auto& str: strs){
        string s = str;
        sort(s.begin(), s.end());
        m[s].push_back(str);
    }

    for (auto& pair : m){
        result.push_back (pair.second);
    }
    return result;
  }
};

int main() {
  vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
  Solution sol;
  auto result = sol.groupAnagrams(strs);

  for (auto &res : result) {
    for (string &str : res) {

      cout << str << " ";
    }
    cout << endl;
  }
  return 0;
}
