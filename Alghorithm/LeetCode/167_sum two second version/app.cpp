#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    int len = nums.size();

    int i = 0;
    int j = len - 1;

    while (i < len && j < len) {

      if (nums[i] + nums[j] == target) {
        return {i + 1, j + 1};
      }

      if (nums[i] + nums[j] > target) {
        j--;
      }

      else if (nums[i] + nums[j] < target) {
        i++;
      }
    }
    return {0, 0};
  }
};

int main() {
  vector<int> numbers = {5, 25, 75};
  int target = 100;

  Solution sl;
  auto result = sl.twoSum(numbers, target);

  cout << result[0] << ", " << result[1] << endl;

  return 0;
}
