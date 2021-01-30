#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long

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

void inOrder(Node *root){
    if(root==NULL){
        return;
    }
    
    stack<pair<Node*, int>> st;
    st.push(make_pair(root, 0));
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
    cout << "\n";
}

void preOrder(Node *root){
    if(!root) { return; }
    
    stack<pair<Node*, int>> st;
    st.push({root, 0});
    Node *curr = NULL;
    int state = -1;
    while(!st.empty()){
        curr = st.top().first;
        state = st.top().second;
        
        st.pop();
        
        if(curr==NULL||state==3){ continue; }
        st.push({curr, state+1});
        
        if(state==0) { cout << curr->data << " "; }
        else if(state==1) { st.push({curr->left, 0}); }
        else if(state==2) { st.push({curr->right, 0}); }
    }
    cout << "\n";
}

void postOrder(Node *root){
    if(!root){ return; }
    
    stack<pair<Node*, int>> st;
    st.push(make_pair(root, 0));
    
    Node *curr = NULL;
    int state = -1;
    
    while(!st.empty()){
        curr = st.top().first;
        state = st.top().second;
        st.pop();
        if(curr==NULL||state==3){ continue; }
        
        st.push({curr, state+1});
        
        if(state==0) { st.push({curr->left, 0}); }
        else if(state==1) { st.push({curr->right, 0}); }
        else if(state==2) { cout << curr->data << " "; }
    }
}

int main(){
    fastio;
    
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(7);
    root->left->right = newNode(6);
    root->right->left = newNode(5);
    root->right->right = newNode(4);
    
    cout << "Inorder: "; 
    inOrder(root); // left root right
    cout << "Preorder: ";
    preOrder(root); // root left right
    cout << "Postorder: "; 
    postOrder(root); // left right root
    
    return 0;
}
