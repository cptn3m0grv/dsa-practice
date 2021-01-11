#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *right, *left;
};

Node *newNode(int data){
    Node *temp = new Node();
    temp->data = data;
    temp->left = temp->right = nullptr;
    return temp;
}

void extractKeys(Node *root, auto &st){
    if(root==nullptr){
        return;
    }
    
    extractKeys(root->left, st);
    st.insert(root->data);
    extractKeys(root->right, st);
}

void convertToBST(Node *root, auto &it){
    if(root==nullptr){
        return;
    }
    
    convertToBST(root->left, it);
    
    root->data = *it;
    it++;
    
    convertToBST(root->right, it);
}

void inorder(Node *root){
    if(root==nullptr){
        return;
    }
    
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){
    
    Node *root = newNode(8);
    root->left = newNode(3);
    root->right = newNode(5);
    root->left->left = newNode(10);
    root->left->right = newNode(2);
    root->right->left = newNode(4);
    root->right->right = newNode(6);
    
    cout << "Before conversion: ";
    inorder(root);
    
    set<int> st;
    extractKeys(root, st);
    
    auto it = st.begin();
    convertToBST(root, it);
    
    cout << "\n";
    
    cout << "After Conversion: ";
    inorder(root);
    
    cout << "\n";
    
    return 0;
}