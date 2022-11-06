#pragma once
#include "base_class.hpp"
#include <iostream>
using namespace std;

namespace project{
    class ChildClass: public BaseClass{
        public:
        ChildClass(int b) {
                a = b;
        }
        void update() override{
            cout << "override" << endl;
        }
    };
}