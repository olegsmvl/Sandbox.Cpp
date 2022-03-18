#include <iostream>
#include <vector>
#include <queue>

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
    void traversal(TreeNode* root)
    {
        if (root == nullptr)
            return;
        cout << root -> val << " ";
        traversal(root->left);
        traversal(root->right);
    }

    int max_depth(TreeNode* root)
    {
        if (root == nullptr)
            return 0;
        int l_depth = max_depth(root->left) + 1;
        int r_depth = max_depth(root->right) + 1;
        return max(l_depth, r_depth);
    }

    int min_depth(TreeNode* root)
    {
        if (root == nullptr)
            return 0;
        int l_depth = min_depth(root->left) + 1;
        int r_depth = min_depth(root->right) + 1;
        return min(l_depth, r_depth);
    }

    int max_sum(TreeNode* root)
    {
        if (root == nullptr)
            return 0;
        int l_sum = max_sum(root->left) + root->val;
        int r_sum = max_sum(root->right) + root->val;
        return max(l_sum, r_sum);
    }

    int sums(TreeNode* node, TreeNode* root)
    {
        if (node == nullptr)
            return 0;


        int l_sum = sums(node->left, root) + node->val;
        int r_sum = sums(node->right, root) + node->val;

        if (node == root){
            cout << "l_sum: " << l_sum << endl;
            cout << "r_sum: " << r_sum << endl;
        }
        return max(l_sum, r_sum);
    }

    void bsf(TreeNode* root){
        if (root == nullptr)
            return;

        queue<TreeNode*> q;

        q.push(root);


        while (!q.empty())
        {
            int s = q.size();
            for (int i = 0 ; i < s; i++){
          
                auto node = q.front();
                auto l = node-> left;
                auto r = node-> right;

                if (l != nullptr)
                    q.push(l);

                if (r != nullptr)
                    q.push(r);

                cout << node->val << " ";
                q.pop();
            }
            cout << endl;
        }
        
    }
};

TreeNode* CreateTree(){
    auto root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->left->left = new TreeNode(14);
    root->left->right = new TreeNode(16);
    root->left->right->right = new TreeNode(8);
    root->left->right->right->left = new TreeNode(1);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    return root;
}

int main()
{
    auto root = CreateTree();
    Solution sl;

    // sl.traversal(root);
    // cout << endl;

    //cout << sl.max_depth(root) << endl;
    //cout << sl.min_depth(root) << endl;

    // cout << sl.max_sum(root) << endl;
    //cout << sl.sums(root, root) << endl;

    sl.bsf(root);

    return 0;
}
