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

void inOrderIterative(Node *root){
    stack<Node*> st;
    Node *curr = root;
    
    while(!st.empty() || curr!=nullptr){
        if(curr!=nullptr){
            st.push(curr);
            curr = curr->left;
        }else{
            curr = st.top();
            st.pop();
            cout << curr->data << " ";
            curr = curr->right;
        }
    }
}

int main(){
    Node *root = newNode(1);
    root->left = newNode(2);
    root->left->left = newNode(4);
    root->right = newNode(3);
    root->right->left = newNode(5);
    root->right->right = newNode(6);
    root->right->left->left = newNode(7);
    root->right->left->right = newNode(8);
    
    inOrderIterative(root);
    
    return 0;
}