/* Approach 3: Using Hashmap 
Time complexity: O(l1 +26l1(l2−l1)).

Space complexity: O(1). s1map and s2map of size 26 is used.

*/

#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
  bool checkInclusion(string s1, string s2) {

    int len1 = s1.size();
    int len2 = s2.size();

    if (len1 > len2) {
      return false;
    }

    unordered_map<char, int> m1;

    for (auto& c: s1) {
      m1[c]++;
    }

    for (int i = 0; i <= len2 - len1; i++) {
      unordered_map<char, int> m2;

      for (int j = 0; j < len1; j++) {
        m2[s2[i + j]]++;
      }

      if (matches(m1, m2)) {
        return true;
      }
    }

    return false;
  }

  bool matches(const unordered_map<char, int> &m1,
               unordered_map<char, int> &m2) {
    for (const pair<char, int> &p : m1) {
      if (m2[p.first] != p.second) {
        return false;
      }
    }
    return true;
  }
};

int main() {
  // string s1 = "ab";
  // string s2 = "adc";

  string s1 = "adc";
  string s2 = "dcda";

  Solution sol;
  auto result = sol.checkInclusion(s1, s2);

  cout << result << endl;

  return 0;
}
