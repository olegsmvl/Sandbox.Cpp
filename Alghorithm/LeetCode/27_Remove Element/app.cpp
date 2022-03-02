#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int Solve(vector<int> &vec)
    {
        int left = 0;
        for (int r = 1; r < vec.size(); r++){
            if (vec[left] != vec[r]){
                left++;
                vec[left] = vec[r];
            }
        }
        vec.erase(vec.begin()+(left + 1), vec.end());
        return left+1;
    }
};

int main()
{
    vector<int> input{1, 2, 3, 4, 4, 4, 5};
    Solution sl;
    int result = sl.Solve(input);

    for (int x : input)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "count: " << result << endl;
    return 0;
}
