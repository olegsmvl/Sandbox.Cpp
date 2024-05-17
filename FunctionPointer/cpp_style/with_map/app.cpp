#include <functional>
#include <iostream>
#include <unordered_map>

using namespace std;

using func = std::function<void()>;

void func1() { cout << "func1" << endl; }

void func2() { cout << "func2" << endl; }

void func3() { cout << "func3" << endl; }

unordered_map<int, func> m{{1, func1}, {3, func3}, {2, func2}};
// unordered_map<int, func> m;

int main() {
  //   m.insert({1, func1});
  //   m.insert({2, func2});
  //   m.insert({3, func3});

  for (auto item : m) {
    cout << item.first << endl;
    auto f = item.second;
    f();
  }

  return 0;
}
