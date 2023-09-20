#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  bool validPath(int n, vector<vector<int>> &edges, int source,
                 int destination) {
    for (auto pair : edges) {
      graph[pair[0]].push_back(pair[1]);
      graph[pair[1]].push_back(pair[0]);
    }

    seen = vector<bool>(n, false);

    dfs(source);
    return seen[destination];
  }

  void dfs(int node) {
    for (int neigbour : graph[node]) {
      if (!seen[neigbour]) {
        seen[neigbour] = true;
        dfs(neigbour);
      }
    }
  }

  unordered_map<int, vector<int>> graph;
  vector<bool> seen;
};

int main() {
  Solution sol;
  vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 0}};
  int source = 0, destination = 2, n = 3;
  bool res = sol.validPath(n, edges, source, destination);
  cout << "res: " << res << endl;
  return 0;
}
