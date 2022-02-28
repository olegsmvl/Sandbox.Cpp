#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int solve(vector<int> &vec)
    {
        if (vec.size() == 0)
            return 0;

        if (vec.size() == 1)
            return vec[0];

        int max_result = 0;

        for (int i = 0; i <= vec.size(); i++)
        {
            int result = get_max_length(vec, i); 
            if (result > max_result)
                max_result = result;
        }

        return max_result;
    }

    int get_max_length(vector<int> &vec, int except)
    {
        int max_result = 0;
        int result = 0;

        int i = 0;

        while (i < vec.size())
        {
            if (i == except)
                i++;

            if (vec[i] == 1)
                result++;
            else
            {
                if (result > max_result)
                    max_result = result;
                result = 0;
            }
            i++;
        }

        return max_result;
    }
};

int main()
{

    vector<int> vec = {1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0};

    Solution sl;

    auto result = sl.solve(vec);

    cout << result << endl;

    return 0;
}