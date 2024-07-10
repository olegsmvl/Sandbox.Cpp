#include <iostream>
using namespace std;

class MyClass {
public:
  static void print(int num);
  int num_in = 15;
};

void MyClass::print(int num) { cout << "num: " << num << endl; }

int main() {
  MyClass cl;
  cl.num_in = 55;
  MyClass::print(89);
  return 0;
}
