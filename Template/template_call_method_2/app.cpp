#include <iostream>
using namespace std;

template <typename T, typename U> class MyClass {
public:
  void callMethod() ;

  T create();

private:
  T obj;
  U obj_end;
};

template <typename T, typename U>
void MyClass<T, U>::callMethod() {
    obj.someMethod();
    obj_end.someMethod();
}

template <typename T, typename U> T MyClass<T, U>::create() {
  T instance;
  return instance;
}

class Sample {
public:
  void someMethod() { std::cout << "Monica! "; }
};

class Second {
public:
  void someMethod() { std::cout << "Piter! "; }
};

class EndFirst {
public:
  void someMethod() { std::cout << "Hello!" << std::endl; }
};

class EndSecond {
public:
  void someMethod() { std::cout << "Bye!" << std::endl; }
};

int main() {
  MyClass<Sample, EndFirst> myClassObj;
  myClassObj.callMethod();

  MyClass<Second, EndSecond> myClassObj2;
  myClassObj2.callMethod();

  auto obj = myClassObj2.create();
  obj.someMethod();

  return 0;
}