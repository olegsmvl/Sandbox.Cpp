#include <iostream>
#include <vector>
#include "tree.hpp"

using namespace std;


int min_lenght(TreeNode *node) {
  if (node == nullptr) {
    return 0;
  }

  if (node->left == nullptr && node->right == nullptr) {
    return 1;
  }

  int left = min_lenght(node->left);
  int right = min_lenght(node->right);

  if (left == 0 && right != 0) {
    return right + 1;
  }

  if (left != 0 && right == 0) {
    return left + 1;
  }

  return 1 + min(left, right);
}

int main() {
    
  auto tree = CreateTree({2,null,3,null,4,null,5,null,6});

  int result = min_lenght(tree);

  cout << result << endl;

  return 0;
}
