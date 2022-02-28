#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    string Solve(vector<int> &vec)
    {
        string result = "";

        if (vec.size() == 0)
            return "";

        if (vec.size() == 1)
            return to_string(vec[0]);

        sort(vec.begin(), vec.end());

        int begin_range = vec[0];
        int end_range = vec[0];

        for (int i = 0; i < vec.size() - 1; i++)
        {
            if (vec[i + 1] == end_range + 1)
            {
                end_range = vec[i + 1];
            }
            else
            {
                if (begin_range == end_range)
                    result += to_string(begin_range) + ",";
                else
                {
                    result += to_string(begin_range) + "-" + to_string(end_range) + ",";
                    begin_range = vec[i + 1];
                    end_range = vec[i + 1];
                }
            }
        }

        if (begin_range == end_range)
            result += to_string(vec[vec.size()-1]);
        else
        {
            result += to_string(begin_range) + "-" + to_string(end_range);
        }

        return result;
    }
};

int main()
{
    // [1,4,5,2,3,9,8,11,0] => "0-5,8-9,11"
    // [1,4,3,2] => "1-4"
    // [1,4] => "1,4"
    vector<int> vec = {1,4,5,2,3,9,8,11,0};
    //vector<int> vec = {1,4,3,2};
    //vector<int> vec = {1, 4};

    Solution sl;
    auto result = sl.Solve(vec);
    cout << result << endl;
    return 0;
}