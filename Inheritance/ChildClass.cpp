#include <iostream>
#include "BaseClass.cpp"
#pragma once
using namespace std;

class ChildClass : public BaseClass
{
public:
    ChildClass()
    {
        id = 2;
        cout << "child ctor" << endl;
    }
    ~ChildClass()
    {
        cout << "child dtor" << endl;
    }
};