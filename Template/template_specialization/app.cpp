#include <iostream>
using namespace std;

template <typename T> struct MyClass {
  MyClass() {}
  MyClass(T val) : value(val) { cout << "default" << endl; }
  T value;
};

template <> struct MyClass<int> {
  MyClass() {}
  MyClass(int val) : value(val) { cout << "specialization" << endl; }
  int value = 6;
};

int main(int argc, char const *argv[]) {
  MyClass<int> t;
  // t.value = 5;

  cout << t.value << endl;

  float val = 7.5;
  /* work since c++ 17 */
  MyClass cl(val);
  cout << cl.value << endl;

  int val2 = 10;
  /* work since c++ 17 */
  MyClass cl2(val2);
  cout << cl2.value << endl;

  return 0;
}
