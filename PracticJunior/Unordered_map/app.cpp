#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void find_test(unordered_map<string, int> *hash_table);
void print(unordered_map<string, int> *hash_table);

int main(int argc, char const *argv[])
{
    auto hash_table = new unordered_map<string, int>{
        {"first", 1},
        {"third", 3},
        {"second", 2},
        {"four", 4},
    };


    unordered_map<string, int>::iterator iter = hash_table -> begin();
    unordered_map<string, int>::iterator end = hash_table -> end();

    // for (unordered_map<string, int>::iterator p = hash_table ->begin(); p!= hash_table->end(); p++){
    //     if (p->second % 2 == 0){
    //         cout << p->first << endl;
    //         hash_table->erase(p);
    //     }
    // }

    while (iter != hash_table -> end())
    {
        if (iter->second % 2 == 0){
            cout << iter->first << endl;
            hash_table->erase(iter);
        }
    }
    

    cout << "=============" << endl;

    print(hash_table);

    delete hash_table;

    return 0;
}

void print(unordered_map<string, int> *hash_table){
    for (unordered_map<string, int>::iterator p = hash_table ->begin(); p!= hash_table->end(); p++){
        if (p->second % 2 == 0){
            cout << p->first << " " << p->second << endl;
            hash_table->erase(p);
        }
    }
}

void find_test(unordered_map<string, int> *hash_table){
    auto pair = hash_table->find("second");

    if(pair == hash_table->end()){
        cout << "not found" << endl;
        return;
    }

    cout << pair->first << endl;
    cout << pair->second << endl;
    cout << "size: " << hash_table->size() << endl;
}
