#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(int data) {
        this->data = data;
        left =right = NULL;
    }
};


Node* insert(struct Node* root, int data) {
    if(root == NULL) 
        return new Node(data);
    if(data <= root->data)
        root->left =  insert(root->left, data);
    else
        root->right = insert(root->right, data);
    return root;
}

void preorder(struct Node* root){
    if(root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

bool isBST(struct Node* root, int min, int max) {
    if(root == NULL)
        return true;
    if(root->data < min || root->data > max)
        return false;
    return isBST(root->left, min, root->data - 1) && isBST(root->right, root->data + 1, max);
}

bool search(struct Node* root, int data) {
    if(root == NULL)
        return false;
    if(root->data == data)
        return true;
    if(data > root->data)
        return search(root->right, data);
    else 
        return search(root->left, data); 
}

int main() {
    Node* root = NULL;
    root = insert(root, 23);
    insert(root, 14);
    insert(root, 40);
    insert(root, 30);
    insert(root, 7);
    insert(root, 17);
    cout << "preorder : ";
    preorder(root);
    cout << endl;
    if(isBST(root, INT_MIN, INT_MAX))
        cout << "The tree is BST" << endl;
    else
        cout << "The tree is not BST" << endl;
    if(search(root, 5)) {
        cout << "Element found!" << endl;
    }
    else
        cout << "Element not found" << endl;
    
    if(search(root, 17)) {
        cout << "Element found!" << endl;
    }
    else
        cout << "Element not found" << endl;
    
    return 0;
}