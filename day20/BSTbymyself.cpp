#include <bits/stdc++.h>
using namespace std;

// template<    typename T>
class TreeNode{
    public:
        int value;
        TreeNode *left;
        TreeNode *right;

        TreeNode(){
            value = 0;
            left = NULL;
            right = NULL;
        }

        TreeNode(int val){
            value = val;
            left = NULL;
            right = NULL; 
        }
};

class BST{
    public:
        TreeNode *root;

        BST(){
            root = NULL;
        }

        bool isEmpty(){
            return (root == NULL) ? true : false;
        }

        void insertNode(TreeNode *newNode){
            if(root == NULL){
                root = newNode;
                cout << "Node inserted as a root node!!!";
            }else{
                TreeNode *temp = root;
                while(temp != NULL){
                    if(newNode->value == temp->value){
                        cout << "Node already exists.";
                    }else if((newNode->value < temp->value) && (temp->left == NULL)){
                        temp->left = newNode;
                        cout << "Node inserted to the left.";
                        break;
                    }else if(newNode->value < temp->value){
                        temp = temp->left;
                    }else if((newNode->value > temp->value) && (temp->right == NULL)){
                        temp->right = newNode;
                        cout << "Node inserted to the right.";
                        break;
                    }else{
                        temp = temp->right;
                    }
                }
            }
            
        }
};

int main(){
    BST tree1;
    int val = 5;
    TreeNode *newNode = new TreeNode();
    newNode->value = val;
    tree1.insertNode(newNode);
    return 0;
}