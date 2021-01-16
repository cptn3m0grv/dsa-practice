#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
};

Node *newNode(int data){
    Node *temp = new Node();
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

int sum(Node *root){
    if(root==NULL){
        return 0;
    }
    
    return (sum(root->left) + root->data + sum(root->right));
}

bool isSumTree(Node *root){
    if(root==NULL || (root->left == NULL && root->right == NULL)){
        return 1;
    }
    
    int ls, rs;
    
    ls = sum(root->left);
    rs = sum(root->right);
    
    if((root->data == ls + rs) && isSumTree(root->left) && isSumTree(root->right)){
        return 1;
    }
    
    return 0;
    
    
}

int main(){
    Node *root = newNode(3);
    root->left = newNode(1);
    root->right = newNode(2);
    
    cout << isSumTree(root) << "\n";
    
    
    return 0;
}