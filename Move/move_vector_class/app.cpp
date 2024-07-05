#include <iostream>
#include <vector>
using namespace std;

class MyClass {
public:
  explicit MyClass(int num) {
    cout << "ctor" << endl;
    for (int i = 0; i < num; i++) {
      vec.push_back(i);
    }
  };

  MyClass(const MyClass &other) { cout << "copy ctor" << endl; }

  MyClass(MyClass &&other) {
    cout << "move ctor" << endl;
    vec = std::move(other.vec);
  }

  void print() {
    for (const int &x : vec) {
      cout << x << " ";
    }
    cout << "size=" << vec.size() << endl;
  }

private:
  vector<int> vec;
  int id;
};

MyClass func() {
  MyClass cl(7);
  return cl;
}

int main() {
  MyClass cl_origin(5);
  cl_origin.print();

  MyClass destination = std::move(cl_origin);

  cout << "===============" << endl;

  cl_origin.print();
  destination.print();

  cout << "===============" << endl;
  auto new_cl = func();
  new_cl.print();

  return 0;
}
