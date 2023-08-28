#include <iostream>
#include <string>
using namespace std;

class Resource {
public:
  Resource(string name) { cout << "ctor resource: " + name << endl; }

  ~Resource() { cout << "dtor resourceп" << endl; }
};

class MyClass {
public:
  MyClass(int num, string name) {
    name_ = name;
    res_ = new Resource(name);

    if (num < 0) {
      throw std::runtime_error("wrong num");
    }

    num_ = num;
  }

  ~MyClass() {
    delete res_;
    cout << "dtor: " + name_ << endl;
  }

  int num_;
  string name_;
  Resource *res_;
};

int main() {
  MyClass *c1 = nullptr;
  MyClass *c2 = nullptr;

  try {
    c1 = new MyClass(1, "first");
    c1 = new MyClass(-2, "second");
  } catch (const std::exception &e) {
    cout << e.what() << endl;
  }

  if (c1) {
    cout << c1->num_ << endl;
  }

  if (c2) {
    cout << c2->num_ << endl;
  } else {
    cout << "c2 nullptr" << endl;
  }

  delete c1;
  delete c2;

  return 0;
}
