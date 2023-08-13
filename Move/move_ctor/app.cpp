#include <iostream>
#include <utility>
using namespace std;

class MyClass {
public:
  explicit MyClass(int *n) : num(n)  {
    cout << "ctor" << endl;

  }

  explicit MyClass(MyClass &&cl): num(cl.num) {
    cout << "move ctor" << endl;
    cl.num = nullptr;
  }

  explicit MyClass(const MyClass& cl): num(cl.num){
    cout << "copy ctor" << endl;
  }

  int *num;
};

void func(MyClass&& cl){
    cout << cl.num << endl;
}

MyClass&& create(){
    static int x = 7;
    MyClass cl(&x);
    return cl;

}

int main()
{
    int x = 5;
    int* px = &x;
    MyClass cl1(px); 
    // MyClass cl2 = std::move(cl1);
    MyClass cl3 = create();

  return 0;
}
