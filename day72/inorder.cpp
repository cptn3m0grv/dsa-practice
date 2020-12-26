#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

struct Node{
    int data;
    struct Node *right, *left;
};

Node *createNode(int data){
    Node *n = new Node;
    n->data = data;
    n->left = n->right = NULL;
    return n;
}

struct Node* insert(struct Node *node, int data){
    if(node == NULL){
        return createNode(data);
    }
    
    if(data<node->data){
        node->left = insert(node->left, data);
    }else if(data>node->data){
        node->right = insert(node->right, data);
    }
    
    return node;
}

void inorder(struct Node *root){
    if(root){
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main(){
    fastio;

    Node *root1 = NULL;
    root1 = insert(root1, 5); 
    root1 = insert(root1, 1); 
    root1 = insert(root1, 10); 
    root1 = insert(root1, 0); 
    root1 = insert(root1, 4); 
    root1 = insert(root1, 7); 
    root1 = insert(root1, 9); 
    
    cout << "Inorder Traversal: ";
    inorder(root1);
    
    return 0;
}