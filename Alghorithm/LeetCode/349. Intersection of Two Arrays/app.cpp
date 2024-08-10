#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    int i = 0;
    int j = 0;
    int len_i = nums1.size();
    int len_j = nums2.size();
    vector<int> result;

    while ((i < len_i) && (j < len_j)) {
      if (nums1[i] == nums2[j]) {
        if (result.size() == 0 || result[result.size() - 1] != nums1[i]) {
          result.push_back(nums1[i]);
        }
        i++;
        j++;
      } else if (nums1[i] > nums2[j]) {
        j++;
      } else if (nums1[i] < nums2[j]) {
        i++;
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
