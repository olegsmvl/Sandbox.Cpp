#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int Solve(vector<vector<int>> &guests)
    {
        int res = 0;
        unordered_map<int, int> arriving;
        unordered_map<int, int> leaving;

        for (auto guest : guests){
            arriving[guest[0]] += 1;
            leaving[guest[1]] += 1;
        }



        vector<int> arriving_keys;
        vector<int> leaving_keys;
        vector<int> result_keys;

        for (auto x : arriving){
            arriving_keys.push_back(x.first);
        }

        for (auto x : leaving){
            leaving_keys.push_back(x.first);
        }

        set_union(arriving_keys.begin(), arriving_keys.end(),
            leaving_keys.begin(), leaving_keys.end(),
            back_inserter(result_keys)
        );

        sort(result_keys.begin(), result_keys.end());

        int current = 0;

        for (int day : result_keys){
            current -= leaving[day];
            current += arriving[day];

            if (current > res)
                res = current;
        }

        return res;
    }
};

int main()
{
    Solution sl;
    vector<vector<int>> input = {{1, 2}, {1, 3}, {2, 4}, {2, 3}};
    auto result = sl.Solve(input);
    cout << result << endl;
    return 0;
}