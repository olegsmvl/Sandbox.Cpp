#include <iostream>
#include <string>
using namespace std;

struct Item {
  Item(string name_, int age_): name(name_), age(age_) { cout << "ctor: " << age << endl; }
  string name;
  int age;
};

Item *method() {
  int opt = 1;
  if (opt == 1) {
    static Item var1("Nik", 30);
    return &var1;
  }

  static Item var2("Mari", 25);
  return &var2;
}

int main() {
  Item *local = method();
  cout << local->name << endl;
  local->name = "Filipp";
  cout << local->name << endl;
  return 0;
}
