#include <iostream>
#include <unordered_map>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main(){
    //vector<int> vec = {1,3,4,5,3,2,2,1,3};
    vector<string> vec = {"fewq", "gtgw","fewq","frtr","erqd"};
    unordered_map<string, int> m;
    //map<int,int> m;

    for (string x : vec){
        m[x]++;
    }

    // m[10] = 5;
    // m[15] = 4;
    // m[3] = 1;
    // m[2] = 77;

    // if (m.find(2)!=m.end()){
    //     cout << "found: " << m[2] << endl;
    //     m[2]++;
    //     cout << "new value: " << m[2] << endl;
    // }
    // else{
    //     cout << "not found" << endl;
    // }

    cout << m.size() << endl;
    
    for (auto x : m){
        cout << x.first << ": " << x.second << endl;
    }

    return 0;
}