#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

int numberOfNodesFunc(struct Node* root) {
    if(root == NULL)
        return 0;
    return 1 + numberOfNodesFunc(root->left) + numberOfNodesFunc(root->right);
}

bool isCompleteBinaryTree(struct Node* root, int index, int numberOfNodes) {
    if(root == NULL)
        return true;

    if(index >= numberOfNodes)
        return false;
    
    return isCompleteBinaryTree(root->left, 2 * index + 1, numberOfNodes) && isCompleteBinaryTree(root->right, 2 * index + 2, numberOfNodes);
}

int main() {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(6);
    root->left->left->right = new Node(7);
    int numberOfNodes = numberOfNodesFunc(root);
    int index = 0;
    if(isCompleteBinaryTree(root, index, numberOfNodes))
        cout << "The tree is complete binary tree" << endl;
    else
        cout << "The tree is not complete binary tree" << endl;
    return 0;
}