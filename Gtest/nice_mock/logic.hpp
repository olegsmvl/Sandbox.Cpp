#pragma once
#include <iostream>

using namespace std;

class Logic {
public:
  virtual void method_a() { cout << "do a" << endl; }
  virtual int method_b() {
    cout << "do b" << endl;
    return 5;
  }
  virtual int method_c(int num) {
    cout << "do c" << endl;
    return num * num;
  }
};

class MainClass {
public:
  MainClass(Logic &logic) : logic_(logic) {}
  int exec() { return logic_.method_b(); }

private:
  Logic &logic_;
};