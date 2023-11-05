#include <array>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> findAnagrams(string s, string p) {

    vector<int> result;

    int len_s = s.size();
    int len_p = p.size();

    if (len_p > len_s){
        return {};
    }

    array<int, 26> counter_s{};
    array<int, 26> counter_p{};

    for (char &x : p) {
      int pos = x - 0x61;
      counter_p[pos]++;
    }

    for (int i = 0; i < len_p; i++) {
      int pos = s[i] - 0x61;
      counter_s[pos]++;
    }

    if (is_anagram(counter_s, counter_p)) {
      result.push_back(0);
    }

    for (int i = 1; i < len_s - (len_p - 1); i++) {
      int letter_first = s[i - 1] - 0x61;
      int letter_last = s[i + len_p - 1] - 0x61;
      counter_s[letter_first]--;
      counter_s[letter_last]++;
      if (is_anagram(counter_s, counter_p)) {
        result.push_back(i);
      }
    }

    return result;
  }

private:
  bool is_anagram(array<int, 26> &counter_s, array<int, 26> &counter_p) {
    for (int i = 0; i < 26; i++) {
      if (counter_s[i] != counter_p[i]) {
        return false;
      }
    }
    return true;
  }
};

int main() {
  Solution sol;
  string s = "aaaaaaaaaa", p = "aaaaaaaaaaaaa";
  auto result = sol.findAnagrams(s, p);

  for (int &x : result) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}
