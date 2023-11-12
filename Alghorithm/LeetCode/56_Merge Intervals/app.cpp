#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  vector<vector<int>> merge(vector<vector<int>> &intervals) {
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> result;
    
    for (auto interval: intervals){
        if (result.empty() || result.back()[1] < interval[0]){
            result.push_back(interval);
        } else{
            result.back()[1] = max(interval[1], result.back()[1]);
        }
        
    }
    
    return result;
  }
};

int main() {
  vector<vector<int>> intervals = {{2, 6}, {1, 3}, {8, 10}, {15, 18}};
  Solution sol;
  auto result = sol.merge(intervals);

  for (auto inter : result) {
    for (int x : inter) {
      cout << x << " ";
    }
    cout << endl;
  }

  return 0;
}
