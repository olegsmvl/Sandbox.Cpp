#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> result;

        for (int i = 0; i < nums.size() - 1; i++)
            for (int j = i + 1; j < nums.size(); j++)
                if (nums[i] + nums[j] == target)
                    return vector<int>{i, j};

        return result;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums = {3, 2, 4};
    int target = 6;

    Solution sol;
    auto result = sol.twoSum(nums, target);

    for (auto &&x : result)
    {
        cout << x << " ";
    }

    return 0;
}
