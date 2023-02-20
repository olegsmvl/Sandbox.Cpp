#include <iostream>
using namespace std;


class MyClass{
public:

template <class T>
auto const& get_value(T& val){
    return val.data; 
}


private:
int value_;

};

class DbClass{
public:
int data = 6;
};


int main(int argc, char const *argv[])
{
    MyClass mc;
    DbClass db;
    DbClass& ref = db;
    auto val = mc.get_value(ref);



    return 0;
}
