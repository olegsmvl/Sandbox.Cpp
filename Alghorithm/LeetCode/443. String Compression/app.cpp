#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int compress(vector<char> &chars) {
    int i = 0;
    int j = 0;

    int res_idx = 0;

    int len = chars.size();
    int count = 0;
    while (i < len && j < len) {
      while (chars[i] == chars[j]) {
        count++;
        j++;
      }

      chars[res_idx] = chars[i];
      res_idx++;

      if (count > 1) {
        string str = to_string(count);
        for (char c : str) {
          chars[res_idx] = c;
          res_idx++;
        }
      } 

      i = j;
      count = 0;
    }
    return res_idx;
  }
};

int main() {
  Solution sol;
  // vector<char> chars = {'a','a','b','b','c','c','c'};
  //   vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
  vector<char> chars = {'a', 'b', 'b', 'b', 'b', 'b', 'b',
                        'b', 'b', 'b', 'b', 'b', 'b'};
  int len = sol.compress(chars);

  for (int i = 0; i < len; i++) {
    cout << chars[i] << " ";
  }

  cout << endl;

  return 0;
}
