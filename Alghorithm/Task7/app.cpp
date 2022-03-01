#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> Solve(vector<vector<int>> &vec)
    {
        sort(vec.begin(), vec.end(), 
        [](const vector<int> &a, const vector<int> &b) {return a[0] < b[0];} );

        vector<vector<int>> result;

        vector<int> last_range;

        for (auto rng : vec){
            if (last_range.size() == 0){
                last_range = rng;
                continue;
            }

            if (rng[0] <= last_range[1]){
                last_range[1] = max(rng[1], last_range[1]);
            }
            else{
                result.push_back(last_range);
                last_range = rng;
            }
                
        }

        result.push_back(last_range);

        return result;
    }
};

int main()
{
    Solution sl;
    vector<vector<int>> ranges = {{1, 3}, {100, 200}, {2, 4}};
    auto result = sl.Solve(ranges);

    for (auto x : result){
        for (auto val : x)
            cout << val << " ";
        cout << endl;
    }

    return 0;
}