#include <iostream>
#include <vector>
#include <unordered_map>
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

        int current = 0;

        

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