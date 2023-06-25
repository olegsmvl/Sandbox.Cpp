#include <iostream>
#include <memory>
using namespace std;

class Item {
public:
  Item() { cout << "ctor" << endl; }
  ~Item() { cout << "dtor " << endl; }
  void print() { cout << "im intem: " << value << endl; }
  int value = 5;
};

int main(int argc, char const *argv[]) {
  {
    auto p = make_unique<Item>();
    p->print();
    if (p == nullptr){
        cout << "null" << endl;
    }

    auto m = std::move(p);
    if (p == nullptr){
        cout << "null" << endl;
    }

    m->print();
  }

  return 0;
}
