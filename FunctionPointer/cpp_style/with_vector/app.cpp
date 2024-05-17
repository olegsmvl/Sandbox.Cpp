#include <functional>
#include <iostream>
#include <vector>

using namespace std;

using func = std::function<void()>;

void func1() { cout << "func1" << endl; }

void func2() { cout << "func2" << endl; }

void func3() { cout << "func3" << endl; }

struct Item {
  int num;
  func f;
};

vector<Item> vec{{1, func1}, {2, func2}, {3, func3}};

vector<int> nums{1, 2, 3, 8, 5};

int main() {
  //   m.insert({1, func1});
  //   m.insert({2, func2});
  //   m.insert({3, func3});

  for (auto item : vec) {
    cout << item.num << endl;
    auto f = item.f;
    f();
  }

  for (int n : nums) {
    cout << n << endl;
  }

  return 0;
}
