#include <iostream>
using namespace std;

class Formater {
public:
  void format(int num) { cout << "formatted text: " << num << endl; }
};

class MyClass {
public:
  MyClass() {}
  static void print(int num);
  void calc(int num);
  int num_in = 15;
  static int counter;

private:
  static Formater formater;
};

Formater MyClass::formater = Formater();
int MyClass::counter = 0;

/* static */
void MyClass::print(int num) {
  counter++;
  cout << "num: " << num << endl;
  formater.format(counter);
}

/* non static */
void MyClass::calc(int num) {
  int square = num * num;
  print(square);
  formater.format(square);
  formater.format(counter);
}

int main() {
  MyClass cl;
  cl.num_in = 55;
  MyClass::print(89);
  cl.calc(100);
  return 0;
}
