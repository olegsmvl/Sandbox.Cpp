#pragma once

#include <string>
using namespace std;

template <typename T>
class BaseClass{
    public:
    BaseClass(int id){
        this->Id = id;
    }

    int Id;
    string Name;
    T field;
};