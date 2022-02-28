#pragma once

#include "IBase.h"
#include <iostream>
using namespace std;

class MyClass : public IBase
{
public:
    void PrintName() override;
};

void MyClass::PrintName()
{
    cout << "my cl" << endl;
}