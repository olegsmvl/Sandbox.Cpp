#include <array>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int numIslands(vector<vector<char>> &grid_) {
    grid = grid_;
    rows = grid.size();
    columns = grid[0].size();
    seen = vector<vector<bool>>(rows, vector<bool>(columns, false));
    int result = 0;

    for (int row = 0; row < rows; row++) {
      for (int col = 0; col < columns; col++) {
        if (grid[row][col] == '1' && !seen[row][col]) {
          result++;
          seen[row][col] = true;
          dfs(row, col);
        }
      }
    }

    return result;
  }

private:
  void dfs(int row, int col) {
    for (vector<int> dir : directions) {
      int new_row = row + dir[0];
      int new_col = col + dir[1];
      if (is_valid(new_row, new_col) && grid[new_row][new_col] == '1' && !seen[new_row][new_col]) {
        seen[new_row][new_col] = true;
        dfs(new_row, new_col);
      }
    }
  }

  bool is_valid(int row, int col) {

    if (row < 0 || col < 0) {
      return false;
    }

    if (row >= rows || col >= columns) {
      return false;
    }

    if (grid[row][col] != '1'){
        return false;
    }

    return true;
  }

  int rows;
  int columns;
  vector<vector<char>> grid;
  vector<vector<bool>> seen;
  vector<vector<int>> directions{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
};

int main() {
  vector<vector<char>> grid_1{{'1', '1', '1', '1', '0'},
                              {'1', '1', '0', '1', '0'},
                              {'1', '1', '0', '0', '0'},
                              {'0', '0', '0', '0', '0'}};

  vector<vector<char>> grid_3{{'1', '1', '0', '0', '0'},
                              {'1', '1', '0', '0', '0'},
                              {'0', '0', '1', '0', '0'},
                              {'0', '0', '0', '1', '1'}};

  Solution sol;
  int res = sol.numIslands(grid_3);
  cout << res << endl;

  return 0;
}
