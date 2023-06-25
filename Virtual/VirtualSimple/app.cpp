#include <iostream>
#include <vector>
using namespace std;

class Parent {
public:
   virtual void my_name() { cout << "Parent" << endl; }
};

class Child : public Parent {
public:
   void my_name() override  { cout << "Child" << endl; }
};

class ChildNext : public Child {
public:
   void my_name() override { cout << "ChildNext" << endl; }
};

int main(int argc, char const *argv[]) {
  Parent* p = new Parent();
  Parent* c = new Child();
  Parent* cn = new ChildNext();

  vector<Parent*> vec;
  vec.push_back(p);
  vec.push_back(c);
  vec.push_back(cn);

  for (auto x : vec) {
    x->my_name();
  }

  return 0;
}
