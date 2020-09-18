#include<iostream>
using namespace std;

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

        TreeNode(int v){
            value = v;
            left = NULL;
            right = NULL;
        }
};

class BST{
    public:
        TreeNode *root;

        bool isEmpty(){
            return (root == NULL) ? true : false;
        }
};

int main(){

    int option;

    do{
        cout << "1. Insert Node" << endl;
        cout << "2. Search Node" << endl;
        cout << "3. Delete Node" << endl;
        cout << "4. Print BST Values" << endl;
        cout << "5. Clear Screen" << endl;
        cout << "0. Exit Program" << endl;

        cin >> option;

        switch(option){
            case 0:
                break;
            case 1:
                cout << "Insert" << endl;
                break;
            case 2:
                cout << "Search" << endl;
                break;
            case 3:
                cout << "Delete" << endl;
                break;
            case 4:
                cout << "Print BST Values" << endl;
                break; 
            case 5:
                cout << "Clear Screen" << endl;
                break;
            default:
                cout << "Invalid !!";
                break;
        }

    }while(option != 0);
}