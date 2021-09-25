#include <iostream>
#include <string>
#pragma once

class BaseClass
{
    public:
    BaseClass(){}

     virtual const char* who_i_am(){
        return "base class";
    }
};
