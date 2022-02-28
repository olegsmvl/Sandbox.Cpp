#include <iostream>
#include <memory>
#include <string>
using namespace std;

class A
{
public:
    string name = "class A";

    template<typename T>
    void set_value(T value){
        T val = value;
        if (typeof(val) == typeof(int))
            cout << "im int!!!";
        else
            cout << "other type";
    }
};

main(int argc, char const *argv[])
{
    auto sp = make_shared<A>();
    auto b = sp;
    cout << sp->name << endl;
    b->set_value(344);
    b->set_value(343.5);
    return 0;
}
