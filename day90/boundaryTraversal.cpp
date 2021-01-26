#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

// we distribute this problem into 
// printing leftTree
// printng leaves
// printing righTree in reverseOrder
// the following code does the samea

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

void leftTree(Node *root, vector<int> &ans){
    if(root==NULL){
        return;
    }
    
    if(root->left){
        ans.push_back(root->data);
        leftTree(root->left, ans);
    }else if(root->right){
        ans.push_back(root->data);
        leftTree(root->right, ans);
    }
}

void leaves(Node *root, vector<int> &ans){
    if(!root){
        return;
    }
    
    leaves(root->left, ans);
    if(!root->right && !root->left){
        ans.push_back(root->data);
    }
    leaves(root->right, ans);
}

void rightTree(Node *root, vector<int> &ans){
    if(root==NULL){
        return;
    }
    
    if(root->right){
        rightTree(root->right, ans);
        ans.push_back(root->data);
    }else if(root->left){
        rightTree(root->left, ans);
        ans.push_back(root->data);
    }
}

vector<int> printBoundaryTraversal(Node *root){
    vector<int> ans;
    ans.push_back(root->data);
    leftTree(root->left, ans);
    leaves(root, ans);
    rightTree(root->right, ans);
    
    return ans;
}

int main(){
    fastio;
    
    Node *root = newNode(20);
    root->left = newNode(8);
    root->right = newNode(22);
    root->left->left = newNode(4);
    root->left->right = newNode(12);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(14);
    root->right->right = newNode(25);
    
    vector<int> ans = printBoundaryTraversal(root);
    for(auto i : ans){
        cout << i << " ";
    }
    
    return 0;
}
