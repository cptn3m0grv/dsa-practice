#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

struct Node{
    int data;
    Node *left, *right;
};

Node *newNode(int data){
    Node *temp = new Node();
    temp->data = data;
    temp->left = temp->right = nullptr;
    return temp;
}

Node *insertNode(Node *root, int data){
    if(root == nullptr){
        return newNode(data);
    }
    
    if(data < root->data){
        root->left = insertNode(root->left, data);
    }else if(data > root->data){
        root->right = insertNode(root->right, data);
    }
    
    return root;
}

bool isBST(Node *node, int minkey, int maxkey){
    if(node==nullptr){
        return true;
    }
    
    if(minkey > node->data || maxkey < node->data){
        return false;
    }
    
    return isBST(node->left, minkey, node->data)&&isBST(node->right, node->data, maxkey);
}

void isBST(Node *root){
    if(isBST(root, INT_MIN, INT_MAX)){
        cout << "The tree is a BST.\n";
    }else{
        cout << "The tree is not a BST.\n";
    }
}

int main(){
    fastio;
    Node *root = nullptr;
    int keys[] = {20, 10, 30, 5, 40};
    
    for(int key: keys){
        root = insertNode(root, key);
    }
    
    swap(root->left, root->right); //this makes it a non-BST
    isBST(root);
    
    return 0;
}