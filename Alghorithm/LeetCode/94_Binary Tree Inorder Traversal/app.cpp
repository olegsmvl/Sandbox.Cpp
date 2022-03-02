#include <iostream>
#include <vector>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0), left(nullptr), right(nullptr){}
    TreeNode(int x): val(x), left(nullptr), right(nullptr){}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution
{
public:
    vector<int> inorderTraversal(TreeNode* root)
    {
        vector<int> result;
        travel(root, result);
        return result;
    }
private:
    void travel(TreeNode* node, vector<int> &result){
        if (node == nullptr){
            return;
        }    

        travel(node->left, result);
        result.push_back(node->val);
        travel(node->right, result);
    }
};

TreeNode* CreateTree(){
    auto root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    return root;
}

int main()
{
    auto root = CreateTree();
    Solution sl;
    auto result = sl.inorderTraversal(root);

    for (int x : result)
        cout << x << " ";

    cout << endl;
    return 0;
}
