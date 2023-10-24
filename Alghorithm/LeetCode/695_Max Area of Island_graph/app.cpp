#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int maxAreaOfIsland(vector<vector<int>> &grid) { return 0;}
};

int main() {
  vector<vector<int>> grid = {{0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
                              {0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0},
                              {0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0}};
  
  Solution sol;
  auto result = sol.maxAreaOfIsland(grid);

  cout << "result: " << result << endl;
  
  return 0;
}
