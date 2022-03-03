#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int>& nums)
    {
        
        int global_sum = INT_MIN;
        int local_sum = 0;
        
        for (int i = 0; i < nums.size(); i++){
            local_sum = max (nums[i], nums[i] + local_sum);
            
            if (global_sum < local_sum)
                global_sum = local_sum;
        }
        return global_sum;
    }
};

int main()
{
    vector<int> nums{-2,1,-3,4,-1,2,1,-5,4};
    Solution sl;
    int result = sl.maxSubArray(nums);

    cout << "result: " << result << endl;
    return 0;
}
