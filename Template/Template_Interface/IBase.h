#pragma once

#include <string>
using namespace std;

template <typename T>
class IBase{
    virtual T getField() = 0;
};