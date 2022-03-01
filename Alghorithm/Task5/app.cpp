#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution
{
public:
    int Solve(vector<vector<int>> &guest)
    {
        int res = 0;
        map<int, int> arriving;
        map<int, int> leaving;

        for (int i =0 ; i < guest.size(); i++){
            arriving[guest[0]] += 1
            leaving[guest[0]] += 1
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