#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {

        int left = 0;
        int right = nums.size();

        while (true)
        {
            int middle = (left + right) / 2;

            if (nums[middle] == target)
                return middle;
            if (nums[middle] < target)
            {
                left = middle + 1;
            }
            if (nums[middle] > target)
            {
                right = middle;
                middle = (left + right) / 2;
            }
            if (left >= right)
                return right;
        }

        return 0;
    }
    // private:
    //     int binary_search(vector<int> &nums, int l, int r, int target){
    //         if (l == r) return l;

    //         int half_index = (l + r) / 2;
    //         int half_value = nums[half_index];
    //         int result = 0;

    //         if (half_value == target)
    //             return half_index;

    //         if (half_value < target)
    //             binary_search(nums, (l+r)/2 + 1, r, target);
    //         else
    //             binary_search(nums, l, (r+l)/2, target);
    //         return result;
    //     }
};

int main(int argc, char const *argv[])
{
    vector<int> nums{1,3,5,6};
    int target = 2;
    Solution sol;
    auto result = sol.searchInsert(nums, target);

    cout << result << endl;

    return 0;
}
