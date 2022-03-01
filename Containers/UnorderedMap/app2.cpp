#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

int main(){
    unordered_map<string, int> cnt; 
    int n;
    string s;

    vector<string> vec = {"up", "up", "down"};

    for (string x : vec){
        cnt[x]++;
    }

    for (auto p : cnt){
        cout << p.first << ": ";
        cout << p.second << endl;
    }

    return 0;
}