#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> m;

    int len = nums.size();

    cout << "len: " << len << endl;

    for (int i = 0; i < len; i++) {
      int num = nums[i];

      if (m.count(num) == 1) {
        cout << "end" << endl;
        return {m[num], i};
      }

      m[target - num] = i;

      cout << "i: " << i << endl;

      for (auto pair : m) {
        cout << "pair: " << pair.first << " : " << pair.second << endl;
      }
    }

    return {0, 0};
  }
};

int main() {
  Solution sol;
  vector<int> nums{3, 2, 4};
  auto result = sol.twoSum(nums, 6);
  cout << "result: ";
  for (int x : result) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}
