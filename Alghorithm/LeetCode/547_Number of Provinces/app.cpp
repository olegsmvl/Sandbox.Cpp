#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  int findCircleNum(vector<vector<int>> &isConnected) {
    int n = isConnected.size();

    seen = vector<bool>(n, false);

    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {

        if (isConnected[i][j] == 1) {
          graph[i].push_back(j);
          graph[j].push_back(i);
        }
      }
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
      if (!seen[i]) {
        ans++;
        seen[i] = true;
        dfs(i);
      }
    }

    return ans;
  }

  void dfs(int node) {
    for (int x : graph[node]) {
      if (!seen[x]) {
        seen[x] = true;
        dfs(x);
      }
    }
  }

  vector<bool> seen;
  unordered_map<int, vector<int>> graph;
};

int main() {
  Solution sol;
  vector<vector<int>> is_connected = {{1, 1, 0}, {1, 1, 0}, {0, 0, 1}};
  auto ans = sol.findCircleNum(is_connected);

  cout << "ans: " << ans << endl;

  return 0;
}
