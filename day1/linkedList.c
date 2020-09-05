#include<stdio.h>
#include<stdlib.h>
// Insertion at beginning --> O(1)
// Insertion at middle --> O(n) 
// Insertion at end  --> O(n)
// Insert after a node --> O(1)

struct Node{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("%d\t", ptr->data);
        ptr=ptr->next;
    }
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

    third->data = 66;
    third->next = fourth;

    fourth->data = 41;
    fourth->next = NULL;

    linkedListTraversal(head);

    return 0;

}