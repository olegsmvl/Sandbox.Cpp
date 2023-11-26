// vector as key

#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<int> p1 = {1,2};
    vector<int> p2 = {1,2};
    vector<int> p3 = {5,6};

    vector<vector<int>> points;
    points.push_back(p1);
    points.push_back(p2);
    points.push_back(p3);

    map<vector<int>, int> m;

    for (auto p: points){
        m[p]++;
    }

    for (auto pair: m){
        cout << pair.second << endl;
    }

    return 0;
}