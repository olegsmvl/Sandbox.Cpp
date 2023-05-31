#include <algorithm>
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
using namespace std;

class Item {
public:
  Item(int &a) : a_(a) {}
  int get_value() { return a_; }

private:
  int &a_;
};

class MyClass {
public:
  MyClass(vector<Item> &vec) : vec_(vec) {}
  void print() { cout << vec_[1].get_value() << endl; }
  vector<Item> vec_;
};

int main() {
	static int a1 = 10;
	static int a2 = 20;
	static int a3 = 30;
	static Item item1(a1);
	static Item item2(a2);
	static Item item3(a3);

  static vector<Item> vec{item1, item2, item3};
  MyClass cl(vec);
  cl.print();
  return 0;
}
