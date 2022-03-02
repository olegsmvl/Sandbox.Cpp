#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> m;
        int max_num = 0;
        int max_freq = 0;
        for (int i =0 ; i < nums.size(); i++){
            m[nums[i]]++;
        }
        
        for (auto x : m){
            if ( x.second > max_freq){
                max_freq = x.second;
                max_num = x.first;
            }
        }
        return max_num;
    }
};

int main()
{
    vector<int> nums{3,2,3};
    Solution sl;
    int result = sl.majorityElement(nums);

    cout << "result: " << result << endl;
    return 0;
}
