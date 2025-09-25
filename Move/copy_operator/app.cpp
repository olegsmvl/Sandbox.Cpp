#include <iostream>
using namespace std;

class MyClass {
public:
  MyClass(int n) : num(n) { cout << "ctor" << endl; }

  MyClass(const MyClass &cl) {
    cout << "copy ctor" << endl;
    num = cl.num;
  }

  ~MyClass() { cout << "dtor" << endl; }

  MyClass &operator=(const MyClass &other) {
    if (&other == this) {
      return *this;
    }
    num = other.num;
    cout << "copy operator" << endl;
    return *this;
  }

  int num = 0;
};

void nothing(MyClass &cl) { cout << cl.num << endl; }

int main() {
  MyClass cl1(5);
  MyClass cl2(8);
  cl2 = cl1;

  cout << cl1.num << endl;
  cout << cl2.num << endl;

  nothing(cl1);

  return 0;
}
