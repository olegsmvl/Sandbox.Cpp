#include "../helpers/tree.hpp"
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  vector<vector<int>> pathSum(TreeNode *root, int &targetSum) {
    vector<vector<int>> result;
    vector<int> path;

    traversal(root, targetSum, path, result);

    return result;
  }

private:
  void traversal(TreeNode *node, int remain_sum, vector<int> &path,
                 vector<vector<int>> &path_vec) {

    if (node == nullptr) {
      return;
    }

    cout << node->val << endl;

    path.push_back(node->val);

    int sum = 0;

    cout << "path: ";
    for (int x : path) {
      cout << x << " ";
      sum+=x;
    }
    cout << "| sum: " << sum << endl;
    
    cout << endl;

    cout << "remain_sum: " << remain_sum << endl;
    cout << "node->val: " << node->val << endl;

    if (remain_sum == node->val && !node->left && !node->right) {
      path_vec.push_back(path);
    } else {
      traversal(node->left, remain_sum - node->val, path, path_vec);
      traversal(node->right, remain_sum - node->val, path, path_vec);
    }

    if (path.size() > 0) {
      path.pop_back();
    }
  }
};

int main() {
  auto root = CreateTree({5, 4, 8, 11, null, 13, 4, 7, 2, null, null, 5, 1});
  Solution sol;
  int target = 22;
  auto result = sol.pathSum(root, target);

  cout << "size: " << result.size() << endl;

  
  for (auto path : result) {
    for (int x : path) {
      cout << x << " ";
    }
    cout << endl;
  }

  return 0;
}
