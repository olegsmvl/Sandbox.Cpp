#include "child_class.hpp"
#include <iostream>

namespace project {
using namespace std;

class Updater {
public:
  Updater(BaseClass &bc) : bc_(bc) {}
  void update() { bc_.update(); }
  BaseClass &bc_;
};

class Summator {
public:
  Summator(int a, int b, int c) : a_(a), b_(b), c_(c) {
    cout << "ctor summ: " << a_ + b_ + c_ << endl;
  }

private:
  int a_;
  int b_;
  int c_;
};

class Tester {
public:
  Tester() : summator_(a_, b_, c_), updater_(child_class_) {
    cout << "ctor updater: " << endl;
    updater_.update();
  }

private:
  int a_ = 2;
  int b_ = 4;
  int c_ = 4;
  Summator summator_;
  Updater updater_;
  ChildClass child_class_;
};

void updater(BaseClass &bc) { bc.update(); }

void init_project() {
  Tester tester;
  // static ChildClass child_class;
  // static Summator sum(1,2,3);
  // static int a = 6;
  // cout << "init" << endl;
  // updater(child_class);
}
} // namespace project