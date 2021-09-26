#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(int argc, char const *argv[])
{
    auto hash_table = new unordered_map<string, int>{
        {"first", 1},
        {"third", 3},
        {"second", 2},
        {"four", 4},
    };

    auto pair = hash_table->find("second");

    unordered_map<string, int>::iterator start = hash_table -> begin();
    unordered_map<string, int>::iterator end = hash_table -> end();

    for (unordered_map<string, int>::iterator p = hash_table ->begin(); p!= hash_table->end(); p++){
        cout << p->first << " " << p->second << endl;
    }

    if(pair == hash_table->end()){
        cout << "not found" << endl;
        return 0;
    }

    cout << pair->first << endl;
    cout << pair->second << endl;
    cout << "size: " << hash_table->size() << endl;

    return 0;
}
