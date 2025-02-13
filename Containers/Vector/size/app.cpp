#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> nums;

  for (int i = 0; i < 64; i++) {
    nums.push_back(i);
  }

  cout << sizeof(nums) << endl;
  cout << nums.size() << endl;
  cout << nums.capacity() << endl;
  cout << nums.data() << endl;

  nums.push_back(1000000);

  cout << sizeof(nums) << endl;
  cout << nums.size() << endl;
  cout << nums.capacity() << endl;
  cout << nums.data() << endl;

  return 0;
}
