#include "BaseClass.cpp"
#include <string>

#pragma once

class Child : public BaseClass
{
public:
    Child()
    {
        //std::cout << who_i_am() << std::endl;
    }
    std::string who_i_am() override
    {
        return "child class";
    }
};