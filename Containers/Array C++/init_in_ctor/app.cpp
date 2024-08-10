#include <array>
#include <vector>
#include <iostream>
using namespace std;


static const vector<int> nums {1,2,5,8};

class MyClass{
public:
MyClass(const vector<int>& nums) : nums_(nums), size_(nums.size()){}

void print(){
  cout << size_ << endl;

  for(int i = 0; i < arr.size(); i++){
    cout << arr[i] << endl;
  }
}

const vector<int>& nums_;

int size_;

static array<int, 8> arr;
};

array<int, 8> MyClass::arr;

int main(int argc, char const *argv[]) {

  MyClass cl(nums);
  cl.print();

  return 0;
}
