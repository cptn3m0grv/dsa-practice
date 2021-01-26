#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

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
    Node *p = head;
    while(p){
        cout << p->data << " ";
        p = p->next;
    }
}

Node *deleteNode(Node *head, int x){
    Node *p = head;
    Node *q = p;
    
    if(x==1){
        head = p->next;
        return head;
    }
    
    for(int i = 1; i < x-1; ++i){
        q = q->next;
    }
    delete q->next;
    q->next = q->next->next;
    return p;
}

int main(){
    fastio;
    
    Node *head = newNode(1);
    head->next = newNode(5);
    head->next->next = newNode(2);
    head->next->next->next = newNode(9);
    
    cout << "Before Deletion: ";
    printList(head);
    cout << "\n";
    
    int K = 2;
    Node *newHead = deleteNode(head, K);
    
    cout << "After Deletion: ";
    printList(head);
    cout << "\n";
    return 0;
}
