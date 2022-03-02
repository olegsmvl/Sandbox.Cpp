#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int Solve(vector<int> &nums, int val)
    {
        int j = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val){
                nums[j] = nums[i];
                j++;
            }
        }
        nums.erase(nums.begin()+j, nums.end());
        return j;
    }
};

int main()
{
    vector<int> nums{0,1,2,2,3,0,4,2};
    int val = 2;
    Solution sl;
    int result = sl.Solve(nums, val);

    for (int x : nums)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "count: " << result << endl;
    return 0;
}
