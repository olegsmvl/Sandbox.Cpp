#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> findClosestElements(vector<int> &arr, int k, int x) {
    int len = arr.size();
    vector<int> result;

    // base case
    if (k == len) {
      for (int x : arr) {
        result.push_back(x);
      }
      return result;
    }

    int left = 0;
    int right = len - 1;
    int mid = 0;

    while (left < right) {
      mid = left + (right - left) / 2;
      cout << "mid: " << mid << endl;

      if (x <= arr[mid]) {
        right = mid;
      } else {
        left = mid + 1;
      }
    }

    left--;
    right = left + 1;

    while (right - left - 1 < k) {
      if (left == -1) {
        right++;
        continue;
      }

      if (right == len || std::abs(x - arr[left]) <= std::abs(x - arr[right])) {
        left--;
      } else {
        right++;
      }
    }

    for (int idx = left + 1; idx < right; idx++) {
      cout << "idx: " << idx << endl;
      result.push_back(arr[idx]);
    }

    return result;
  }
};

int main() {
  vector<int> arr = {1, 2, 4, 5, 6};
  int k = 2, x = 3;

  Solution sol;
  auto result = sol.findClosestElements(arr, k, x);

  for (int x : result) {
    cout << x << " ";
  }

  cout << endl;

  return 0;
}
