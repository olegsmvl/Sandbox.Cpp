#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    auto m = new map<string, int> {
        {"Ann", 37},
        {"User", 27},
        {"Anton", 24},
        {"Victor", 33}
    };

    //auto iter = m->begin();

    for (auto iter = m->begin(); iter != m->end(); ++iter)
    {
        cout << iter->first << '\t';
        cout << iter->second << endl;
    }

    return 0;
}
