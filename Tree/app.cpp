#include<iostream>
using namespace std;

//https://prog-cpp.ru/data-tree/

struct tnode
{
    int field;
    tnode *left;
    tnode *right;
    tnode(int _field){
        field = _field;
        left = nullptr;
        right = nullptr;
    }
};

void tree_print(tnode *tree){
    if (tree!=nullptr){
        cout <<" "<< tree->field;
        tree_print(tree->left);
        tree_print(tree->right);
    }
}

tnode create_tree(){
    auto root = tnode(1);
    root.left = new tnode(2);
    root.right = new tnode(3);
    root.left->left = new tnode(4);
    root.left->left->left = new tnode(8);
    root.left->left->right = new tnode(9);
    root.left->right = new tnode(5);
    root.left->right->left = new tnode(10);
    root.left->right->right = new tnode(11);
    root.right->left = new tnode(6);
    root.right->left->left = new tnode(12);
    root.right->left->right = new tnode(13);
    root.right->right = new tnode(7);
    root.right->right->left = new tnode(14);
    root.right->right->right = new tnode(15);

    return root;
}

int main(int argc, char const *argv[])
{
    auto tree = create_tree();
    tree_print(&tree);
    return 0;
}
