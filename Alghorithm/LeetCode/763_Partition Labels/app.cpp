#include <algorithm>
#include <array>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> partitionLabels(string s) {
    array<int, 26> last{};
    int len = s.size();

    for (int i = 0; i < len; i++) {
      last[s[i] - 'a'] = i;
    }

    for (int &x : last) {
      cout << x << " ";
    }
    cout << endl;

    int j = 0, anchor = 0;
    vector<int> ans;
    for (int i = 0; i < len; ++i) {
      j = max(j, last[s[i] - 'a']);
      cout << s[i] << " i=" << i << " last=" << last[s[i] - 'a'] << " j=" << j << endl;
      if (i == j) {
        cout << "append" << endl;
        ans.push_back(i - anchor + 1);
        anchor = i + 1;
      }
    }

    return ans;
  }
};

int main() {
  Solution sol;
  string s = "ababcbacadefegdehijhklij";
  auto result = sol.partitionLabels(s);
  for (auto &r : result) {
    cout << r << " ";
  }
  cout << endl;
  return 0;
}
