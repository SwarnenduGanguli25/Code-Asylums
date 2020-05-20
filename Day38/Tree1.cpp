#include<bits/stdc++.h>
using namespace std;
class Node {
    public :
        Node* left;
        Node* right;
        int data;

        Node(int d) {
            data = d;
            left = right = NULL;
        }
};

Node* buildTree() {
    int d;
    cin >> d;
    if(d == -1)
        return NULL;
    Node* root = new Node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void preOrder(Node* root) {
    if(root == NULL)
        return;
    cout << root->data << ",";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root) {
    if(root == NULL)
        return;
    
    inOrder(root->left);
    cout << root->data << ",";
    inOrder(root->right);
}

int countNumberOfNodes(Node* root) {
    if(root == NULL) 
        return 0;
    return 1 + countNumberOfNodes(root->left) + countNumberOfNodes(root->right);
}

int height(Node* root) {
    if(root == NULL) 
        return 0;
    return 1 + max(height(root->left), height(root->right));
}

void levelOrderTraversal(Node* root) {
    if(root == NULL) 
        return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()) {
        Node* front = q.front();
        cout << front->data << ",";
        q.pop();
        if(front->left != NULL) {
            q.push(front->left);
        }
        if(front->right != NULL) {
            q.push(front->right);
        }
    }
}

int replaceNodeWithSum(Node* root) {
    if(root == NULL)
        return 0;
    int leftSum = replaceNodeWithSum(root->left);
    int rightSum = replaceNodeWithSum(root->right);
    return root->data += leftSum + rightSum;
}

int main() {
    Node* root = buildTree();
    preOrder(root);
    cout << "\nCount : " << countNumberOfNodes(root) << endl;
    cout << "Height : " << height(root) << endl;
    replaceNodeWithSum(root);
    levelOrderTraversal(root);
    return 0;
}