#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(int data) {
        this->data = data;
        left = right = NULL;    
    }
};

bool isFullBinaryTree(struct Node* root) {
    if(root == NULL)
        return true;
    if(root->left == NULL && root->right == NULL)
        return true;
    if(root->left && root->right)
        return isFullBinaryTree(root->left) && isFullBinaryTree(root->right);
    return false;
}

int main() {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(6);
    root->left->left->right = new Node(7);
    if(isFullBinaryTree(root))
        cout << "The tree is full binary tree" << endl;
    else 
        cout << "The tree is not full binary tree" << endl;
    return 0;
}