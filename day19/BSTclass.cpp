#include<iostream>
using namespace std;
#define SPACE 10

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

        BST(){
            root = NULL;
        }

        bool isEmpty(){
            return (root == NULL) ? true : false;
        }

        void insertNode(TreeNode *newNode){
            if(root == NULL){
                root = newNode;
                cout << "Value inserted as root node!" << endl;
            }else{
                TreeNode *temp = root;
                while(temp != NULL){
                    if(newNode->value == temp->value){
                        cout<< "Value already exists." << endl;
                    }else if((newNode->value < temp->value) && (temp->left == NULL)){
                        temp->left = newNode;
                        cout << "Value inserted to the left !!!" << endl;
                        break;   
                    }else if(newNode->value < temp->value){
                        temp = temp->left;
                    }else if((newNode->value > temp->value) && (temp->right == NULL)){
                        temp->right = newNode;
                        cout << "Value inserted to the right !!!" << endl;
                        break;
                    }else{
                        temp = temp->right;
                    }
                }
            }
        }

        void print2D(TreeNode *root, int space){
            if(root == NULL){
                return;
            }
            space += SPACE;
            print2D(root->right, space);
            cout << endl;
            for(int i = SPACE; i < space; i++){
                cout << " ";
            }
            cout << root->value << "\n";
            print2D(root->left, space);
        }

        void printPreOrder(TreeNode *root){
            if(root == NULL){
                return;
            }

            cout << root->value << "\t" ;
            printPreOrder(root->left);
            printPreOrder(root->right);
        }

        void printPostOrder(TreeNode *root){
            if(root == NULL){
                return;
            }
            printPostOrder(root->left);
            printPostOrder(root->right);
            cout << root->value << "\t";
        }

        void printInOrder(TreeNode *root){
            if(root == NULL){
                return;
            }
            printInOrder(root->left);
            cout << root->value << "\t";
            printInOrder(root->right);
        }

        TreeNode* iterativeSearch(int val){
            if(root == NULL){
                return root;
            }else{
                TreeNode *temp = root;
                while(temp != NULL){
                    if(val == temp->value){
                        return temp;
                    }else if(val > temp->value){
                        temp = temp->right;
                    }else if(val < temp->value){
                        temp = temp->left;
                    }
                }
                return NULL;
            }
        }

        TreeNode* recursiveSearch(TreeNode *r, int val){
            if(r == NULL || r->value == val){
                return r;
            }else if(val < r->value){
                return recursiveSearch(r->left, val);
            }else{
                return recursiveSearch(r->right, val);
            }
        }
};

int main(){

    BST tree1;
    int option, val;

    do{
        cout << "1. Insert Node" << endl;
        cout << "2. Search Node" << endl;
        cout << "3. Delete Node" << endl;
        cout << "4. Print BST Values" << endl;
        cout << "5. Clear Screen" << endl;
        cout << "6. Pre-order traversal" << endl;
        cout << "7. Post-order traversal" << endl;
        cout << "8. In-order traversal" << endl;
        cout << "9. Recurive Search" << endl;
        cout << "0. Exit Program" << endl;

        cin >> option;
        TreeNode *newNode = new TreeNode(); // global scope and in heap mem

        switch(option){
            case 0:
                break;
            case 1:
                cout << "Insert" << endl;
                cout << "Enter the value of tree node: ";
                cin >> val;
                newNode->value = val;
                tree1.insertNode(newNode);
                break;
            case 2:
                int val;
                cout << "Search" << endl;
                cout << "Enter the value to search: ";
                cin >> val;
                newNode = tree1.iterativeSearch(val);
                if(newNode == NULL){
                    cout << "Node not found !" << endl;
                }else{
                    cout << "Node Found !" << endl;
                }
                break;
            case 3:
                cout << "Delete" << endl;
                break;
            case 4:
                cout << "Print BST Values" << endl;
                tree1.print2D(tree1.root, 5);
                break; 
            case 5:
                cout << "Clear Screen" << endl;
                break;
            case 6:
                cout << "Pre-order traversal" << endl;
                tree1.printPreOrder(tree1.root);
                break;
            case 7:
                cout << "Post-order taversal" << endl;
                tree1.printPostOrder(tree1.root);
                break;
            case 8:
                cout << "In-order traversal" << endl;
                tree1.printInOrder(tree1.root);
                break;
            case 9:
                int val;
                cout << "Search" << endl;
                cout << "Enter the value to search: ";
                cin >> val;
                newNode = tree1.recursiveSearch(tree1.root, val);
                if(newNode == NULL){
                    cout << "Node not found !" << endl;
                }else{
                    cout << "Node Found !" << endl;
                }
                break;
            default:
                cout << "Invalid !!";
                break;
        }

    }while(option != 0);
}