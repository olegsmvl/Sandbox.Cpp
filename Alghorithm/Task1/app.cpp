#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &a, vector<int> &b)
    {
        vector<int> result;

        map<int,int> m;

        for (int x : b)
            m[x] += 1;

        // for (auto iter = m.begin(); iter != m.end(); ++iter){
        //     cout << iter->first << ": ";
        //     cout << iter->second << endl;
        // }

        for (int i = 0; i < a.size(); i++){
            int count = m[a[i]];
            if (count > 0 ){
                result.push_back(a[i]);
                m[i] -= 1;
            }

        }

        // for (int i = 0; i < a.size(); i++)
        //     for (int j = 0; j < b.size(); j++)
        //     {
        //         if (a[i] == b[j])
        //             result.push_back(a[i]);
        //     }

        return result;
    }
};

int main()
{
    Solution cl;
    vector<int> a = {1, 2, 3, 2, 0};
    vector<int> b = {5, 1, 2, 7, 3, 2};

    auto result = cl.intersection(a, b);

    for (int x : result)
        cout << x << endl;

    return 0;
}