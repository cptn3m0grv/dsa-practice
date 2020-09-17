#include<iostream>
using namespace std;

class Node{
    public:
        int key;
        int data;
        Node* next;

        Node(){
            key = 0;
            data = 0;
            next = NULL;
        }

        Node(int k, int d){
            key = k;
            data = d;
        }
};

class LinkedList{
    public:
        Node* head;

        LinkedList(){
            head = NULL;
        }

        LinkedList(Node *n){
            head = n;
        }

        Node* nodeExists(int k){
            Node *temp = NULL;
            Node *ptr = head;

            while(ptr != NULL){
                if(ptr->key == k){
                    temp = ptr;
                }
                ptr = ptr->next;
            }

            return temp;
        }

        void appendNode(Node *n){
            if(nodeExists(n->key) != NULL){
                cout << "Node already exists.\n";
            }else{
                if(head == NULL){
                    head = n;
                    cout << "Node appended\n";
                }else{
                    Node *ptr = head;
                    while(ptr->next != NULL){
                        ptr = ptr->next;
                    }
                    ptr->next = n;
                    cout << "Node appended\n";
                }
            }
        }

        void prependNode(Node *n){
            if(nodeExists(n->key) != NULL){
                cout << "Node already exists.\n";
            }else{
                if(head == NULL){
                    head = n;
                    cout << "Node added to the starting.\n";
                }else{
                    n->next = head;
                    head = n;
                    cout << "Node added to the starting.\n";
                }
            }
        }

        void insertNodeAfter(int k, Node *n){
            Node *ptr = nodeExists(k);

            if(ptr == NULL){
                cout << "No such node exists.\n";
            }else{
                if(nodeExists(n->key) != NULL){
                    cout << "Node already exists with this key value.\n";
                }else{
                    n->next = ptr->next;
                    ptr->next = n;
                    cout << "Node inserted.\n";
                }
            }
        }

        void deleteNodeByKey(int k){
            if(head == NULL){
                cout << "List is already empty.\n";
            }else if(head != NULL){
                if(head->key == k){
                    head = head->next;
                    cout << "Node deleted\n";
                }else{
                   Node *temp = NULL;
                   Node *prev = head;
                   Node *curr = head->next;

                   while(curr != NULL){
                       if(curr->key == k){
                           temp = curr;
                           curr = NULL;
                       }else{
                           prev = prev->next;
                           curr = curr->next;
                       }
                   }
                   if(temp != NULL){
                       prev->next = temp->next;
                       cout << "Node deleted.\n";
                   }else{
                       cout << "Node doesnot exist\n";
                   }
                }
            }
        }

};

int main(){


    return 0;
}