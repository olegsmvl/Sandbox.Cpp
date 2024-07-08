#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    auto m = new map<string, int>{
        {"Ann", 37},
        {"User", 27},
        {"Anton", 24},
        {"Victor", 33}};

    (*m)["Elena"] = 34;
    m->insert({"Max", 45});
    m->insert(make_pair("Vlad", 41));

    //auto iter = m->begin();

    for (auto iter = m->begin(); iter != m->end(); ++iter)
    {
        cout << iter->first << '\t';
        cout << iter->second << endl;
    }

    cout << "===========" << endl;

    auto iter = m->find("Max");
    if (iter == m->end())
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << iter->first << '\t';
        cout << iter->second << endl;
    }

    return 0;
}
