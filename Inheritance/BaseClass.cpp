#include <iostream>
#pragma once
using namespace std;

class BaseClass
{
public:
    BaseClass()
    {
        cout << "base ctor" << endl;
    }
    ~BaseClass()
    {
        cout << "base dtor" << endl;
    }
    int id = 1;
};