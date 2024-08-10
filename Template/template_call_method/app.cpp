#include <iostream>
using namespace std;

template <typename T>
class MyClass {
public:
    void callMethod(T& obj) {
        obj.someMethod();
    }
};

class Sample {
public:
    void someMethod() {
        std::cout << "Method Sample called!" << std::endl;
    }
};

class Second {
public:
    void someMethod() {
        std::cout << "Method Second called!" << std::endl;
    }
};

int main() {
    Sample sapmleObj;
    MyClass<Sample> myClassObj;
    myClassObj.callMethod(sapmleObj);

    Second secondObj;
    MyClass<Second> myClassObj2;
    myClassObj2.callMethod(secondObj);

    return 0;
}