#include<stdio.h>
#include<stdlib.h>
// Insertion at beginning --> O(1)
// Insertion at middle --> O(n) 
// Insertion at end  --> O(n)
// Insert after a node --> O(1)

struct Node{
    int data;
    struct Node * next;
};

void traversingList(struct Node *ptr){
    printf("Address of Data\t\t");
    printf("Value of Data\t\t");
    printf("Address of Next Node\n");
    while(ptr != NULL){
        printf("%d\t\t\t", &ptr->data);
        printf("%d\t\t", ptr->data);
        printf("%d\n", ptr->next);
        ptr = ptr->next;
    }
}

struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct Node * insertAtIndex(struct Node *head, int data, int index){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * temp = head;
    int i = 0;
    while(i != index - 1){
        temp = temp->next;
        i++;
    }
    ptr->data = data;
    ptr->next = temp->next;
    temp->next = ptr;

    return head;
    
}

struct Node * insertAtEnd(struct Node *head, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = ptr;
    ptr->next = NULL;

    return head;
}

struct Node * insertAfterNode(struct Node * head, struct Node *prevNode, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;

}

int main(){

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 13;
    third->next = fourth;

    fourth->data = 16;
    fourth->next = NULL;
    traversingList(head);
    printf("\n");
    head = insertAtFirst(head, 1);
    traversingList(head);
    printf("\n");
    head = insertAtIndex(head, 23, 2);
    traversingList(head);
    printf("\n");
    head = insertAfterNode(head, second, 200);
    traversingList(head);
    printf("\n");
    head = insertAtEnd(head, 100);
    traversingList(head);
    printf("\n");

    return 0;
}