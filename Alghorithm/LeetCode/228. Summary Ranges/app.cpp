#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  vector<string> summaryRanges(vector<int> &nums) {
    int i = 0;
    int j = 0;  

    int len = nums.size();
    vector<string> result;

    while (i < len && j < len) {
      j++;

      if ((j == len) || (nums[j] != (nums[j - 1] + 1))) {
        if (j - i > 1) {
          result.push_back(to_string(nums[i]) + "->" + to_string(nums[j - 1]));
        } else {
          result.push_back(to_string(nums[i]));
        }
        i = j;
      }
    }

    return result;
  }
};

int main() {
  //     Example 1:

  // Input: nums = [0,1,2,4,5,7]
  // Output: ["0->2","4->5","7"]
  // Explanation: The ranges are:
  // [0,2] --> "0->2"
  // [4,5] --> "4->5"
  // [7,7] --> "7"
  // Example 2:

  // Input: nums = [0,2,3,4,6,8,9]
  // Output: ["0","2->4","6","8->9"]
  // Explanation: The ranges are:
  // [0,0] --> "0"
  // [2,4] --> "2->4"
  // [6,6] --> "6"
  // [8,9] --> "8->9"

  return 0;
}
