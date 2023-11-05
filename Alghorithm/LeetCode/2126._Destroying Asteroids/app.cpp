#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());
        long total_mass = mass;
        for (int& x: asteroids){
            if (x <= total_mass){
                total_mass += x;
            }
            else{
                return false;
            }
        }
        return true;
    }
};

int main()
{
    int mass = 10;
    vector<int> asteroids = {3,9,19,5,21};
    Solution sol;
    auto result = sol.asteroidsDestroyed(mass, asteroids);


    return 0;
}
