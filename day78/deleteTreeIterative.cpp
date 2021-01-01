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


void deleteTree(Node *root){
    if(root==nullptr){
        return;
    }
 
    queue<Node*> Q;
    Q.push(root);
    Node *front = nullptr;
    
    while(!Q.empty()){
        front = Q.front();
        Q.pop();
        
        if(front->left){
            Q.push(front->left);
        }
        
        if(front->right){
            Q.push(front->right);
        }
        
        delete front;
    }
    
    root = nullptr;
    
}
int main(){
    fastio;
    
    Node *root = newNode(15);
    root->left = newNode(10);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->left->left->left = newNode(6);
    root->right->right = newNode(5);
    
    deleteTree(root);
    
    
    return 0;
}