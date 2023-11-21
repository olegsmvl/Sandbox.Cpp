#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int compress(vector<char> &chars) {
    int len = chars.size();

    int i = 0;
    int count = 0;
    int idx = 0;

    while (i < len) {
      char first = chars[i];

      while (i < len && chars[i] == first) {
        i++;
        count++;
      }

      chars[idx] = first;
      idx++;

      if (count > 1) {
        string num = to_string(count);
        for (char c : num) {
          chars[idx] = c;
          idx++;
        }
      }

      count = 0;
    }

    return idx;
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
