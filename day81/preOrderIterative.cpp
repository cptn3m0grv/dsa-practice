#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
};

Node *newNode(int data){
    Node *temp = new Node();
    temp->data = data;
    temp->right = temp->left = nullptr;
    return temp;
}

void preOrderIterative(Node *root){
    if(root==nullptr){
        return;
    }
    
    stack<Node*> st;
    st.push(root);
    Node *curr = root;
    while(!st.empty()){
        if(curr!=nullptr){
            cout << curr->data << " ";
            // we process right first because we are dealing with a stack here
            // stack will place the right node at the bottom
            // therefore preorder -- root->left->right
            if(curr->right){
                st.push(curr->right);
            }
            curr = curr->left;
        }else{
            curr=st.top();
            st.pop();
        }
    }
}

int main(){
    
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->right->left = newNode(5);
    root->right->right = newNode(6);
    root->right->left->left = newNode(7);
    root->right->left->right = newNode(8);
    
    preOrderIterative(root);
    
    
    return 0;
}