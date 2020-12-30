#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

struct Node{
    int data;
    Node *left, *right;
    
    // Node(int data){
    //     this->data = data;
    //     this->left = this->right = NULL;
    // }
};

Node *newNode(int data){
    Node *temp = new Node();
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

bool isIdentical(struct Node *root1, struct Node *root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    
    return ((root1&&root2) && (root1->data==root2->data) && isIdentical(root1->left, root2->left) && isIdentical(root1->right, root2->right));
    
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