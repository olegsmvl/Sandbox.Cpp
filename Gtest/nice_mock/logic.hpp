#pragma once
#include <iostream>

using namespace std;

struct Unit {
  int id;
  int num;
};

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

  virtual int method_d(int *num) {
    cout << "do d" << endl;
    return 2 * *num;
  }

  virtual int method_e(Unit *unit) {
    cout << "do e" << endl;
    return 3 * unit->num;
  }

  virtual int method_reference(Unit &unit) {
    cout << "do f" << endl;
    return 3 * unit.num;
  }
};

class MainClass {
public:
  MainClass(Logic &logic) : logic_(logic) {}
  void exec_a() { logic_.method_a(); }
  int exec_b() { return logic_.method_b(); }
  int exec_c(int num) { return logic_.method_c(num); }
  int exec_d(int *num) { return logic_.method_d(num); }
  int exec_e(Unit *unit) { return logic_.method_e(unit); }
  int exec_f(Unit &unit) { return logic_.method_reference(unit); }

  int update() {
    Unit unit{1,2};
    logic_.method_reference(unit);
    return unit.num;
  }

private:
  Logic &logic_;
};