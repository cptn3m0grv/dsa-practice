#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

struct Node{
    int data;
    Node *left, *right;
};

Node *newNode(int data){
    Node *temp =  new Node();
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void inOrderIterative(Node *root){
    if(root==NULL){
        return; 
    }
    
    stack<pair<Node*, int>> st;
    st.push({root, 0});
    while(!st.empty()){
        Node *curr = st.top().first;
        int state = st.top().second;
        
        st.pop();
        
        if(curr==NULL or state==3) { continue; }
        
        st.push({curr, state+1});
        
        if(state==0) { st.push({curr->left, 0}); }
        else if(state==1) { cout << curr->data << " "; }
        else if(state==2) { st.push({curr->right, 0}); }
    }
}

int main(){
    Node *root = newNode(8);
    root->left = newNode(2);
    root->right = newNode(13);
    root->left->left = newNode(1);
    root->left->right = newNode(7);
    
    inOrderIterative(root);
    
    return 0;
}
