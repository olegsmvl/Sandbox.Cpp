#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> merge(vector<int> a, vector<int> b){
    unordered_map<int,int> m;
    vector<int> result;

    for (int x: a){
        m[x]++;
    }

    for (int x: b){
        if (m.count(x) > 0 && m[x] > 0){
            m[x]--;
            result.push_back(x);
        }
    }

    return result;
}



int main(){
    vector<int> a{1, 2, 3, 2, 0};
    vector<int> b{5, 1, 2, 7, 3, 2};

    auto result = merge(a, b);

    for (int x : result){
        cout << x << " ";
    }

    cout << endl;
    

    return 0;
}
