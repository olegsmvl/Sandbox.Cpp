#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void find_test(unordered_map<string, int> &hash_table);
void print(unordered_map<string, int> &hash_table);

int main(int argc, char const *argv[])
{
    unordered_map<string, int> hash_table{
        {"first", 1},
        {"third", 3},
        {"second", 2},
        {"four", 4},
        {"five", 5},
        {"six", 6},
    };

    for (auto p = hash_table.begin(); p != hash_table.end(); )
    {
        if (p->second % 2 == 0)
        {
            cout << p->first << endl;
            p = hash_table.erase(p);
        }
        else
            ++p;
    }

    cout << "=============" << endl;

    print(hash_table);

    return 0;
}

void print(unordered_map<string, int> &hash_table)
{
    for (auto p = hash_table.begin(); p != hash_table.end(); p++)
    {
        cout << p->first << " " << p->second << endl;
    }
}

void find_test(unordered_map<string, int> &hash_table)
{
    auto pair = hash_table.find("second");

    if (pair == hash_table.end())
    {
        cout << "not found" << endl;
        return;
    }

    cout << pair->first << endl;
    cout << pair->second << endl;
    cout << "size: " << hash_table.size() << endl;
}
