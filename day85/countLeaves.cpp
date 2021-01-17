#include<bits/stdc++.h>
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

int countLeaves(Node *root){
    int count = 0;
    
    if(root==NULL){
        return count;
    }
    
    list<Node*> Q;
    Q.push_back(root);
    
    Node *curr = NULL;
    
    while(Q.size()){
        curr = Q.front();
        Q.pop_front();
        
        if(curr->left==NULL && curr->right==NULL){
            count = count + 1;
        }else{
            if(curr->left){
                Q.push_back(curr->left);
            }
            if(curr->right){
                Q.push_back(curr->right);
            }
        }
    }
    
    return count;
}

int main(){
    Node *root = newNode(50);
    root->left = newNode(20);
    root->right = newNode(30);
    root->left->left = newNode(10);
    root->left->right = newNode(10);
    root->right->left = newNode(20);
    
    int n = countLeaves(root);
    
    if(n==3){
        cout << "Code is good enough !!!\n";
    }else{
        cout << "Please check your logic once again !!!\n";
    }
    
    return 0;
}