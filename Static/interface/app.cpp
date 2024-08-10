#include <iostream>
using namespace std;

class IMyClass {
public:
  virtual void perform() = 0;
};

class MyClass : public IMyClass {
public:
  void perform() override { cout << "exec!" << endl; }
};

class MainClass {
public:
  MainClass() {}

  void init(IMyClass &cl) { cl_ = &cl; }

  void exec() {
    if (cl_ != nullptr) {
      cl_->perform();
    }
  }

  static IMyClass *cl_;
};

IMyClass *MainClass::cl_ = nullptr;

void func() {
  if (MainClass::cl_ != nullptr) {
    MainClass::cl_->perform();
  }
}

int main() {
  MyClass cl;
  MainClass m;
  m.init(cl);
  m.exec();
  func();
  return 0;
}
