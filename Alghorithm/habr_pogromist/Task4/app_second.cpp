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
        // int current_result = 0;

        // int i = 1;
        // int j = 0;

        // while (i < vec.size())
        // {
        //     current_result += vec[j];
        //     if (vec[i] == 0){
        //         if (max_result < current_result){
        //             max_result = current_result; 
        //         }
        //         current_result = 0;
        //     }    
        //     i++;
        // }

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