#include <iostream>
#include <string>
using namespace std;

enum class Items
{
    first,
    second,
    third
};

string enum_to_string(Items& item)
{
    if (item == Items::first)
        return "first";
    if (item == Items::second)
        return "second";
    if (item == Items::third)
        return "third";
    return "unknown";
}

int main(int argc, char const *argv[])
{
    Items i = Items::first;
    cout << enum_to_string(i) << endl;

    return 0;
}
