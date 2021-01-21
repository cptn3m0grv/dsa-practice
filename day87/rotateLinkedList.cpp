#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *newNode(int data){
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void printList(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
}

Node *rotateList(Node *head, int k){
    Node *curr = head;
    int len = 1;
    while(curr->next){
        ++len;
        curr = curr->next;
    }
    curr->next = head;
    
    Node *end;
    
    k = k%len;
    k = len-k;
    
    for(int i = 0; i < k; ++i){
        end = head;
        head = head->next;
    }
    
    // head = curr->next;
    end->next = NULL;
    
    return head;
}

int main(){
    Node *head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
    
    cout << "Before Rotation: ";
    printList(head);
    cout << "\n";
    
    int k = 1012;
    head = rotateList(head, k);
    
    cout << "After Rotation: ";
    printList(head);
    cout << "\n";
}
