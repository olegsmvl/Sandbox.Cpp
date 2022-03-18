#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int result = search(nums, target);

        if (result == -1)
            return {-1, -1};

        int l = result;
        int r = result;

        while (l > 0)
        {
            l--;
            if (nums[l] != target)
            {
                l++;
                break;
            }
        }

        while (r < nums.size() - 1)
        {
            r++;
            if (nums[r] != target)
            {
                r--;
                break;
            }
        }

        return {l, r};
    }

    int search(vector<int> &nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;

        while (true)
        {
            int mid = (right + left) / 2;

            if (left == right && nums[left] != target)
                return -1;

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }
    }
};

int main()
{
    // vector<int> nums{5,7,7,8,8,10};
    vector<int> nums{2, 2};
    int val = 2;
    Solution sl;
    auto result = sl.searchRange(nums, val);

    for (int x : result)
    {
        cout << x << " ";
    }
    cout << endl;
    // cout << "count: " << result << endl;
    return 0;
}
