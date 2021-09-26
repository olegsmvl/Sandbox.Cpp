#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(int argc, char const *argv[])
{
    auto hash_table = new unordered_map<string, int>{
        {"first", 1},
        {"second", 2},
        {"third", 3},
        {"four", 4},
    };

    auto pair = hash_table->find("second");

    auto start = hash_table -> begin();
    auto end = hash_table -> end();

    for (const std::pair<string, int> x: hash_table){

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
