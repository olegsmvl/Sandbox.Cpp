#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int findMaxConsecutiveOnes(vector<int> &nums) {
    int len = nums.size();
    int count = 0;
    int max_count = 0;
    for (int i = 0; i < len; i++) {
      if (nums[i] == 1) {
        count++;
      } else {
        count = 0;
      }
      max_count = max(max_count, count);
    }
    return max_count;
  }
};

int main() {
  //     Input: nums = [1,1,0,1,1,1]
  // Output: 3
  // Explanation: The first two digits or the last three digits are consecutive
  // 1s. The maximum number of consecutive 1s is 3.

  return 0;
}
