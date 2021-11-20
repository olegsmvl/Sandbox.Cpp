#include <iostream>
#include <unordered_map>
using namespace std;

int main(int argc, char const *argv[])
{
    unordered_map<string, int> map {
        {"A", 10},
        {"B", 11},
        {"C", 12},
        {"D", 13},
        {"E", 14},
        {"F", 15},
    };

    int result = map.find("A")->second;
    cout << result << endl;

    if (map.find("M") == map.end())
        cout << "not found<" << endl;
    else{
        result = map.find("M")->second;
        cout << result << endl;
    }

    return 0;
}
