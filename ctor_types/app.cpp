#include <iostream>
#include <string>
#include <vector>
using namespace std;

class MyClass {
public:
  MyClass(int num) : num_(num) { cout << "ctor, num: " << num_ << endl; }

  MyClass(const MyClass &other) {
    num_ = other.num_;
    cout << "copy ctor, num: " << num_ << endl;
  }

  MyClass(MyClass &&other) noexcept {
    num_ = other.num_;
    cout << "move ctor, num: " << num_ << endl;
  }

  MyClass& operator=(MyClass &&other) noexcept {
    num_ = other.num_;
    cout << "move operator, num: " << num_ << endl;
    return *this;
  }

  MyClass& operator=(const MyClass &other) {
    num_ = other.num_;
    cout << "copy operator, num: " << num_ << endl;
    return *this;
  }

  MyClass create_object() {
    MyClass temp(777);
    return temp;
  }

  ~MyClass() noexcept {}

private:
  int num_;
};

struct MyStruct {
  int num1;
  int num2;
  string str;
};

int main() {
  /* direct initialization */
  MyClass cl1(1);

  /* move initialization */
  MyClass cl2 = std::move(cl1);

  /* list initializstion*/
  MyStruct st{10, 20, "example"};
  vector<int> vec{1, 2, 3, 4, 5};

  /* equal initialaization*/
  MyClass cl3 = cl2;

  cout << "=============" << endl;

  MyClass cl4(4);
  cl4 = cl3;

  cout << "=============" << endl;
  cl4 = std::move(cl3);

  cout << "=============" << endl;
  const MyClass &&cl_ref = MyClass(5);

  cl4 = cl_ref;
  MyClass cl6 = cl_ref;

  MyClass cl7 = cl6.create_object();

  return 0;
}
