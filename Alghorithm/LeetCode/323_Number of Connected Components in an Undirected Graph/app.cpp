#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  int countComponents(int n, vector<vector<int>> &edges) {
    seen = vector<bool>(n, false);

    for (auto &pair : edges) {
      int a = pair[0];
      int b = pair[1];

      graph[a].push_back(b);
      graph[b].push_back(a);
    }

    int ans = 0;

    for (int node = 0; node < n; node++) {
      if (!seen[node]) {
        ans++;
        seen[node] = true;
        dfs(node);
      }
    }
    return ans;
  }

  void dfs(int node) {
    for (int neighbour : graph[node]) {
      if (!seen[neighbour]) {
        seen[neighbour] = true;
        dfs(neighbour);
      }
    }
  }

  unordered_map<int, vector<int>> graph;
  vector<bool> seen;
};

int main() {
  Solution sol;
  vector<vector<int>> edges = {{0,1},{1,2},{3,4}};
  int n = 5;
  auto res = sol.countComponents(n, edges);
  cout << "res: " << res << endl;
  return 0;
}
