#include <iostream>
#include <string>
#pragma once

class BaseClass
{
    public:
    BaseClass(){
    //    std::cout << who_i_am() << std::endl;
    }

     virtual std::string who_i_am(){
        return "base class";
    }
};
