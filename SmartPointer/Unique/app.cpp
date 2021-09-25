#include <iostream>
#include <memory>
#include <string>
using namespace std;

class Item{
    private:
     string name;
    
    public:
    Item(string str){
        name = str;
        cout << "ctor" << endl;
        }
    ~Item(){cout << "dtor" << endl;}
    string getValue() {return name;}
};

int main(int argc, char const *argv[])
{
    //auto p = new Item();
    unique_ptr<Item> item1(new Item("first"));
    auto item2 = move(item1);

    cout << item2->getValue() << endl;

    if (item1 == nullptr)
     cout << "null" << endl;

    auto item3 = make_unique<Item>("third");

    cout << item3->getValue() << endl;

    return 0;
}
