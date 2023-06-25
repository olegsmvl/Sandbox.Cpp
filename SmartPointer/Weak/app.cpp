#include <iostream>
#include <memory>
using namespace std;

class Item {
public:
  Item() { cout << "ctor" << endl; }
  ~Item() { cout << "dtor" << endl; }
  void print() { cout << "im: " << value << endl; }
  int value = 5;
};

int main(int argc, char const *argv[]) {
  auto p = make_shared<Item>();
  cout << "first" << endl;
  weak_ptr<Item> v;
  v = p;
  auto p2 = p;

  p->print();
  v.lock()->print();

  p.reset();
  p2.reset();
  if (v.lock()) {
    v.lock()->print();
  }
  else{
    cout << "is null" << endl;
  }

  cout << "second" << endl;
  return 0;
}
