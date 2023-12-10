#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <limits>
using namespace std;

class Solution {
public:
    bool isReflected(vector<vector<int>>& points) {
        int x_min = INT_MAX;
        int x_max = INT_MIN;

        map<vector<int>, int> m;

        for (auto p : points){
            x_min = min(x_min,  p[0]);
            x_max = max(x_max,  p[0]);

            m[p]++;
        }

        for (auto pair : m){
            cout << pair.first[0] << " " << pair.first[1] << " : " << pair.second << endl;
        }

        float x_line = x_min + (x_max - x_min) / 2.0;

        cout << "x_line: " << x_line << endl;

        for (auto p : points){
           int x = p[0];
           int y = p[1];

        //    m[p]--;

        //   if (m[p] <= 0){
        //       m.erase(p);
        //   }

           int x_refl = 0;

           if (x < x_line) {
               x_refl = x_line + (x_line - x);
           } else{
               x_refl = x_line - ( x - x_line);
           }

           vector<int> p_refl{x_refl,y};

           cout << "p: " << p[0] << " " << p[1] << " | ";  
           cout << "p_refl: " << p_refl[0] << " " << p_refl[1] << endl;  

           if (m.count(p_refl) == 0){
               return false;
           }

        }

        return true;
    }
};

int main()
{
    Solution sol;

    // vector<vector<int>> points = {{1,1},{-1,1}};
    // vector<vector<int>> points = {{0,0},{0,0}};
    vector<vector<int>> points = {{0,0},{1,0}};

    bool result =  sol.isReflected(points);
    cout << result << endl;
    return 0;
}
