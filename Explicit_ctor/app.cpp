#include <iostream>
using namespace std;

class MyClass {
public:
  MyClass(int x) { value1 = x; }
  int value1;
};

class MyClassExplicit {
public:
  explicit MyClassExplicit(int x) { value1 = x; }
  int value1;
};

int main(int argc, char const *argv[]) {
  // work
  MyClass obj1 = 15;
  cout << obj1.value1 << endl;

  // not work
  //   MyClassExplicit obj2 = 7;
  //   cout << obj2.value1 << endl;

  return 0;
}
