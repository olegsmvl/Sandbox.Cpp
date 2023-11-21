#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
  vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int i = 0;
    int j = 0;

    vector<int> result;

    while ((i < nums1.size()) && (j < nums2.size())) {
      if (nums1[i] < nums2[j]) {
        i++;
      } else if (nums1[i] > nums2[j]) {
        j++;
      } else {
        int num = nums1[i];
        result.push_back(num);
        i++;
        j++;
        while ((i < nums1.size()) && (j < nums2.size()) &&
               (nums1[i] == nums2[j]) && (nums1[i] == num)) {
          i++;
          j++;
        }
      }
    }

    return result;
  }
};

int main() {
  //     Example 1:

  // Input: nums1 = [1,2,2,1], nums2 = [2,2]
  // Output: [2]
  // Example 2:

  // Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
  // Output: [9,4]
  // Explanation: [4,9] is also accepted.
  return 0;
}
