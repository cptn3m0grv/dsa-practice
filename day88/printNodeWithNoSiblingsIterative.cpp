#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

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

void printSingles(Node *root){
    if(root==NULL){
        return;
    }
    
    queue<Node*> Q;
    Q.push(root);
    while(Q.size()){
        Node *temp = Q.front();
        Q.pop();
        if(temp->right ==NULL && temp->left != NULL){
            cout << temp->left->data << " ";
        }else if(temp->left ==NULL && temp->right !=NULL){
            cout << temp->right->data << " ";
        }
        
        if(temp->left){
            Q.push(temp->left);
        }
        if(temp->right){
            Q.push(temp->right);
        }
    }
    
}

int main(){
    fastio;
    
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(5);
    root->right->left->left = newNode(6);
    
    printSingles(root);
    
    return 0;
}
