#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

int kthToLast(struct Node * head, int index){
    
    struct Node * p = head;
    struct Node * q = p;
    int i;
    for(i=0; i<index; i++){
        q = q->next;
    }
    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }
    
    return p->next->data;
}

int main(){


    int kTh;
    int index  = 1;
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fifth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 5;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = fifth;

    fifth->data = 2;
    fifth->next = NULL;

    kTh = kthToLast(head, index);
    
    printf("The %d \bth to last node has data: %d", kTh, index);

    return 0;
}