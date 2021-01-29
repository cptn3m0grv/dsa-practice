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
    
    stack<Node*> st;
    unordered_map<Node*, int> cnt;
    st.push(root);
    while(!st.empty()){
        Node *curr = st.top();
        if(curr==NULL) { st.pop(); continue;}
        if(cnt[curr]==0) { st.push(curr->left); }
        else if(cnt[curr]==1) { cout << curr->data << " "; }
        else if(cnt[curr]==2) { st.push(curr->right); }
        else { st.pop(); }
        
        cnt[curr]++;
    }
}

int main(){
    Node *root = newNode(8);
    root->left = newNode(5);
    root->right = newNode(13);
    root->left->left = newNode(1);
    root->left->right = newNode(7);
    
    inOrderIterative(root);
    
    return 0;
}
