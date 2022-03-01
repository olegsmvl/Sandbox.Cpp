#include <iostream>

using namespace std;

struct Node
{
    int value;
    Node *left;
    Node *right;

    Node(int val)
    {
        value = val;
        left = nullptr;
        right = nullptr;
    }
};

Node* CreateTree()
{
    auto root_node = new Node(1);
    root_node->left = new Node(2);
    root_node->right = new Node(3);
    root_node->left->left = new Node(5);
    root_node->left->right = new Node(6);
    root_node->right->left = new Node(7);
    root_node->right->right = new Node(8);
    return root_node;
}

void get_sum(Node* node, int &sum){
    
    if (node == nullptr)
        return;

    if ((node->left == nullptr) && (node->right == nullptr)){
        sum += node->value;
        return;
    }

    get_sum(node->left, sum);
    get_sum(node->right, sum);
}

int get_sum_func(Node* root){
    int sum = 0;
    get_sum(root, sum);
    return sum;
} 

int main()
{
    auto tree = CreateTree();
    auto result = get_sum_func(tree);
    cout << result << endl;
    return 0;
}