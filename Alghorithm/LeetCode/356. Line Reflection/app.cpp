#include <functional>
#include <iostream>
#include <limits>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
  struct PointHash {
    size_t operator()(const vector<int> &p) const {
      string str = to_string(p[0] * 1000) + to_string(p[1]);
      std::hash<string> h;
      return h(str);
    };
  };

  struct PointEqual {
    bool operator()(const vector<int> &lhs, const vector<int> &rhs) const {
      return lhs[0] == rhs[0] && lhs[1] == rhs[1];
    }
  };

  bool isReflected(vector<vector<int>> &points) {
    unordered_set<vector<int>, PointHash, PointEqual> s;

    int min_x = INT32_MAX;
    int max_x = INT32_MIN;

    for (auto p : points) {
      s.insert(p);
      min_x = min(min_x, p[0]);
      max_x = max(max_x, p[0]);
    }

    double line = (max_x - min_x) / 2.0 + min_x;

    for (auto p : points) {
      int x = p[0];
      int y = p[1];

      double dist = line - x;
      int refl_x = line + dist;

      vector<int> refl_p{refl_x, y};

      if (s.find(refl_p) == s.end()) {
        return false;
      }
    }

    return true;
  }
};

int main() {
  // vector<vector<int>> points = {{1, 1}, {-1, 1}};
  // vector<vector<int>> points = {{0,0},{0,0}};
  // vector<vector<int>> points = {{0, 0}, {1, 0}};
  vector<vector<int>> points = {{1, 1}, {-4, 1}};
  Solution sol;
  bool result = sol.isReflected(points);
  cout << (result ? "True" : "False") << endl;

  return 0;
}