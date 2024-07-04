#include <iostream>
using namespace std;

class MyClass {
public:
  MyClass() {
    id++;
    cout << "default ctor" << endl;
  }

  MyClass(int new_id) {
    own_id_ = new_id;
    cout << "parametrized ctor" << endl;
  }

  MyClass(const MyClass &other) {
    cout << "copy ctor" << endl;
    own_id_ = other.own_id_;
  }

  void print_id();
  static int id;
  int own_id_ = 0;
};

void MyClass::print_id() { cout << id << " " << own_id_ << endl; }

int MyClass::id = 0;

int main() {

  MyClass cl(10);
  MyClass c3;
  MyClass clp2 = cl;
  cl.print_id();
  clp2.print_id();

  return 0;
}
