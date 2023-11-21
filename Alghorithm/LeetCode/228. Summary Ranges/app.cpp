#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  vector<string> summaryRanges(vector<int> &nums) {
    vector<string> result;

    int i = 0;
    int count = 0;
    int len = nums.size();

    while (i < len) {
      int first = nums[i];
      while (i < len - 1 && nums[i] + 1 == nums[i + 1]) {
        i++;
        count++;
      }

      if (count > 0) {
        result.push_back(to_string(first) + "->" + to_string(nums[i]));
      } else {
        result.push_back(to_string(first));
      }
      i++;
      count = 0;
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
