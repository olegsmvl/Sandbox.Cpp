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
  float x = 12.8f;
  int m = x;
  MyClass obj1 = x;
  cout << obj1.value1 << endl;
  cout << m << endl;

  // not work
  //   MyClassExplicit obj2 = 7;
  //   cout << obj2.value1 << endl;

  return 0;
}
