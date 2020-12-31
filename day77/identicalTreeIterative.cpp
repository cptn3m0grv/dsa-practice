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
    temp->right = temp->left = NULL;
    return temp;
}

bool isIdentical(Node *root1, Node *root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    
    if(root1==NULL){
        return false;
    }
    
    if(root2==NULL){
        return false;
    }
    
    stack<pair<Node *, Node *>> st;
    st.push({root1, root2});
    
    while(!st.empty()){
        Node *x = st.top().first;
        Node *y = st.top().second;
        st.pop();
        
        if(x->data != y->data){
            return false;
        }
        
        if(x->left && y->left){
            st.push({x->left, y->left});
        }else if(x->left || y->left){
            return false;
        }
        
        if(x->right && y->right){
            st.push({x->right, y->right});
        }else if(x->right || y->right){
            return false;
        }
        
    }
    
    return true;
}

int main(){
    fastio;
    
    Node *root1 = newNode(15);
    root1->left = newNode(3);
    root1->right = newNode(2);
    root1->left->left = newNode(1);
    root1->left->right = newNode(6);
    root1->right->left = newNode(5);
    
    Node *root2 = newNode(15);
    root2->left = newNode(3);
    root2->right = newNode(2);
    root2->left->left = newNode(1);
    root2->left->right = newNode(6);
    root2->right->left = newNode(5);
    
   
    
    if(isIdentical(root1, root2)){
        cout << "The two trees are identical.\n";
    }else{
        cout << "The two trees are not identical.\n";
    }
    
    return 0;
}