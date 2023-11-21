#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int findMaxConsecutiveOnes(vector<int> &nums) {
    int len = nums.size();

    int j = 0;
    int zeros = 0;
    int max_count = 0;

    for (int i = 0; i < len; i++) {
      if (nums[i] == 0) {
        zeros++;
      }

      while (zeros > 1) {
        if (nums[j] == 0) {
          zeros--;
        }
        j++;
      }

      int cur_count = i - j + 1;
      max_count = max(cur_count, max_count);
    }
    return max_count;
  }
};

int main() {

  // Example 1:

  // Input: nums = [1,0,1,1,0]
  // Output: 4
  // Explanation:
  // - If we flip the first zero, nums becomes [1,1,1,1,0] and we have 4
  // consecutive ones.
  // - If we flip the second zero, nums becomes [1,0,1,1,1] and we have 3
  // consecutive ones. The max number of consecutive ones is 4. Example 2:

  // Input: nums = [1,0,1,1,0,1]
  // Output: 4
  // Explanation:
  // - If we flip the first zero, nums becomes [1,1,1,1,0,1] and we have 4
  // consecutive ones.
  // - If we flip the second zero, nums becomes [1,0,1,1,1,1] and we have 4
  // consecutive ones. The max number of consecutive ones is 4.
  return 0;
}
