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

  void exec() { cl_->perform(); }

  static IMyClass *cl_;
};

class DummyClass : public IMyClass {
  void perform() override { cout << "fake!" << endl; }
};

static DummyClass dummy;

IMyClass *MainClass::cl_ = &dummy;

void func() {
    MainClass::cl_->perform();
}

int main() {
  MyClass cl;
  MainClass m;
  m.init(cl);
  m.exec();
  func();
  return 0;
}
