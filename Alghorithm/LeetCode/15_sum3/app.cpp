#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  vector<vector<int>> threeSum(vector<int> &nums) {
    sort(nums.begin(), nums.end());

    int idx = 0;
    int len = nums.size();

    vector<vector<int>> result;

    while (idx < len - 2) {
      int first = nums[idx];

      if (idx > 0 && first == nums[idx - 1]) {
        idx++;
        continue;
      }

      auto sum_result = sum_two(nums, idx);

      if (sum_result.size() > 0) {
        for (auto &sum : sum_result) {
          result.push_back(sum);
        }
      }

      idx++;
    }

    return result;
  }

private:
  vector<vector<int>> sum_two(vector<int> &nums, int idx) {
    int i = idx + 1;
    int j = nums.size() - 1;
    int target = 0;

    vector<vector<int>> result;
    while (i < j) {

      int sum = nums[idx] + nums[i] + nums[j];

      if (sum < target) {
        i++;
      }

      if (sum > target) {
        j--;
      }

      if (sum == target) {
        result.push_back({nums[idx], nums[i++], nums[j--]});
        while (i < j && nums[i] == nums[i - 1]) {
          i++;
        }
      }
    }
    return result;
  }
};

int main(int argc, char const *argv[]) {
  vector<int> nums{-1, 0, 1, 2, -1, -4};
  //   vector<int> nums{0, 0, 0, 0};

  Solution sol;

  auto result = sol.threeSum(nums);

  cout << "result" << endl;

  for (auto &r : result) {
    cout << r[0] << ", " << r[1] << ", " << r[2] << endl;
  }

  return 0;
}
