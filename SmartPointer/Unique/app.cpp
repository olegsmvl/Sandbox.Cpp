#include <iostream>
#include <memory>
#include <string>
using namespace std;

class Item {
private:
  string name;

public:
  Item(string str) {
    name = str;
    cout << "ctor " << name << endl;
  }
  ~Item() { cout << "dtor " << name << endl; }
  string getName() { return name; }
};

int main(int argc, char const *argv[]) {
  // auto p = new Item();
  unique_ptr<Item> item1(new Item("first"));
  auto item2 = move(item1);

  cout << item2->getName() << endl;

  if (item1 == nullptr)
    cout << "null" << endl;

  auto item3 = make_unique<Item>("third");
  cout << item3->getName() << endl;

  item3.reset(new Item("4th"));
  cout << item3->getName() << endl;

  Item* ptr = item3.get(); 
  cout << ptr->getName() << endl;

  return 0;
}
