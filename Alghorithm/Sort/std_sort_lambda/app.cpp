#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item{
    explicit Item(int val) : value(val){}
    int value;
};

int main()
{
    vector<int> vec{40,2,10,3,18,15};

    vector<Item> items;

    for (int x: vec){
        items.push_back(Item(x));
    }

    auto compare = [](const Item& lhs, const Item& rhs) {return lhs.value <  rhs.value;};

    sort(items.begin(), items.end(), compare);

    for (Item x: items){
        cout << x.value << ", ";
    }

    cout << endl;
    
    return 0;
}
