/* Approach 5: Sliding Window  */

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
    unordered_map<char, int> m2;

    for (int i = 0; i < len1; i++) {
      m1[s1[i]]++;
      m2[s2[i]]++;
    }

    for (int i = 0; i < len2 - len1; i++) {
      if (matches(m1, m2)) {
        return true;
      }

      m2[s2[i]]--;
      m2[s2[i+len1]]++;
    }

    return matches(m1, m2);
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
