#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    int len = nums.size();

    int j = 0;

    for (int i = 0; i < len; i++) {
      while (i < len && nums[i] == 0) {
        i++;
      }

      if (i < len) {
        nums[j] = nums[i];
        j++;
      }
    }

    while (j < len) {
      nums[j] = 0;
      j++;
    }
  }
};

int main() {
  Solution sol;
  //   vector<int> vec{0, 1, 0, 3, 12, 0};
  vector<int> vec{0, 1, 0};
  sol.moveZeroes(vec);

  for (int x : vec) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}
