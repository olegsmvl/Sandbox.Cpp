#include "BaseClass.cpp"
#pragma once

class Child : public BaseClass{
    public:
     const char* who_i_am() {
        return "child class";
    }
};