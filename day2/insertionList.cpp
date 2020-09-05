#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node * next;
};

void traverseList(struct Node * head){
    cout << "Address of data\t\t";
    cout << "Value of data\t";
    cout<< "Address of next node\n";
    while(head != NULL){
        cout << &head->data <<"\t\t";
        cout << head->data <<"\t\t";
        cout << head->next << "\n";
        head = head->next;
        
    }
}

struct Node * insertAtFirst(struct Node * head, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;

    return ptr;
}

struct Node * insertAtIndex(struct Node * head, int index, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * temp = head;
    int i = 0;
    while(i != index-1){
        temp = temp->next;
        i++;
    }
    ptr->data = data;
    ptr->next = temp->next;
    temp->next = ptr;

    return head;
}

struct Node * insertAtEnd(struct Node * head, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * temp = head;
    ptr->data = data;
    while(temp->next != NULL){
        temp = temp->next;
    }
    ptr->next = NULL;
    temp->next = ptr;

    return head;
}

struct Node * insertAfter(struct Node * head, struct Node * prevNode, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
}

int main(){
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 17;
    third->next = fourth;

    fourth->data = 23;
    fourth->next = NULL;
    // head->data = NULL;
    // head->next = NULL;

    traverseList(head);
    cout << endl;
    head = insertAtFirst(head, 10);
    cout << endl;
    traverseList(head);
    cout << endl;
    head = insertAtIndex(head, 2, 5);
    cout<<endl;
    traverseList(head);
    cout<<endl;
    head = insertAtEnd(head, 30);
    cout<<endl;
    traverseList(head);
    cout<<endl;
    head = insertAfter(head, third, 21);
    cout<<endl;
    traverseList(head);


    free(head);
    free(second);
    free(third);
    free(fourth);

    return 0;
}