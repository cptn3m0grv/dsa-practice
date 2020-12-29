#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

struct Node{
    int data;
    struct Node *left, *right, *nextRight;
};

Node *newNode(int data){
    Node *temp = new Node();
    temp->data = data;
    temp->left = temp->right = temp->nextRight = NULL;
    return temp;
}

void connect(Node *root){
    queue<Node*> Q;
    Q.push(root);
    Q.push(NULL);//represent end of current level
    while(!Q.empty()){
        Node *temp = Q.front();
        Q.pop();
        
        if(temp!=NULL){
            temp->nextRight = Q.front();
            if(temp->left){
                Q.push(temp->left);
            }
            if(temp->right){
                Q.push(temp->right);
            }
        }else if(!Q.empty()){
            Q.push(NULL);
        }
    }
}

int main(){
    fastio;
    
    Node *root = newNode(10);
    root->left = newNode(8);
    root->left->left = newNode(3);
    root->right = newNode(2);
    root->right = newNode(90);
    
    connect(root);
        
        
    // cout << "The nextRight of " << root->data << " is  " << root->nextRight << "\n";
    cout << "The nextRight of " << root->left << " is  " << root->left->nextRight << "\n";
    // cout << "The nextRight of " << root->right << " is  " << root->right->nextRight << "\n";
    cout << "The nextRight of " << root->left->left << " is  " << root->left->left->nextRight << "\n";
    // cout << "The nextRight of " << root->right->right << " is  " << root->right->right->nextRight << "\n";
    
    return 0;
}