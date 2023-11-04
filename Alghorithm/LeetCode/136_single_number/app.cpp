#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  int singleNumberHash(vector<int> &nums) {
    unordered_map<int, int> m;
    for (int &num : nums) {
      m[num]++;
    }

    for (auto &pair : m) {
      if (pair.second == 1) {
        return pair.first;
      }
    }

    return 0;
  }

  int singleNumberXor(vector<int> &nums) {
    int result = 0;
    for (int &num : nums) {
      result ^= num;
    }
    return result;
  }
};

int main() {
  vector<int> nums{4, 1, 2, 1, 2};
  Solution sol;
  int result = sol.singleNumberXor(nums);
  cout << result << endl;
  return 0;
}
