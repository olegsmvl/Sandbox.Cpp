#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int get_unique_num(vector<int> &vec)
{
    int result = 0;

    sort(vec.begin(), vec.end());

    for (int i = 0; i < vec.size() - 1; i += 2)
    {
        if (vec[i] != vec[i + 1])
            return vec[i];
    }

    return result;
}

int get_unique_num2(vector<int> &vec){
    unordered_map<int,int> m;

    for (int x : vec){
        m[x]++;
    }

    for (auto x : m){
        if (x.second == 1)
            return x.first;
    }
    return 0;
}

int main()
{
    vector<int> vec = {1, 1, 2, 3, 2, 4, 4};

    int result = get_unique_num2(vec);
    cout << result << endl;
    return 0;
}