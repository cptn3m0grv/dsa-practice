#include <bits/stdc++.h>
using namespace std;

//       1
//     /  \
//    2    3
//   / \  / \
//  4  5 6  7

// level order: 1 2 3 4 5 6 7
//reverse level order: 4 5 6 7 2 3 1

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

void reverseLevelOrder(Node *root){
    if(root == nullptr){
        return;
    }
    
    list<Node*> Q;
    Q.push_back(root);
    
    stack<int> st;
    Node *curr = nullptr;
    
    while(Q.size()){
        curr = Q.front();
        Q.pop_front();
        
        st.push(curr->data);
        
        //since we will be dealing with a stack here
        // we need to process right node before the left
        if(curr->right){
            Q.push_back(curr->right);
        }
        if(curr->left){
            Q.push_back(curr->left);
        }
        
        
    }
    
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}

int main(){
    
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    
    reverseLevelOrder(root);
    
    return 0;
}