#include <iostream>
#include <memory>
#include <string>
using namespace std;

class Item
{
private:
    string name;

public:
    Item(string str)
    {
        name = str;
        cout << "ctor" << endl;
    }
    ~Item() { cout << "dtor" << endl; }
    string getName() { return name; }
};

int main(int argc, char const *argv[])
{
    //auto item = new Item("ones");
    auto ptr1 = make_shared<Item>("ones");
    
    {
        auto ptr2(ptr1);
        cout << ptr2->getName() << endl;
    }

    cout << ptr1->getName() << endl;

    return 0;
}
