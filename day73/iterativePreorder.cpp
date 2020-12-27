#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

struct Node{
    int data;
    struct Node *right, *left;
};

Node *newNode(int data){
    Node *temp = new Node();
    temp->data = data;
    temp->right = temp->left = NULL;
    return temp;
}

//PREORDER root->left->right
void preOrder(Node *root){
    stack<Node *> st;
    st.push(root);
    
    while(!st.empty()){
        Node *temp = st.top();
        cout << temp->data << " ";
        st.pop();
        
        //we push right before left because we want left to be on
        //the top of the stack and processed first
        
        if(temp->right)
            st.push(temp->right);
        
        if(temp->left)
            st.push(temp->left);
    }
}

int main(){
    Node *root = newNode(5);
    root->left = newNode(2);
    root->right = newNode(7);
    root->left->left = newNode(10);
    root->left->right = newNode(11);
    
    preOrder(root);
    
    return 0;
}