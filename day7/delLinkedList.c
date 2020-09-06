#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void traverseList(struct Node * head){
    printf("Address of node\t\t");
    printf("Value of node\t\t  ");
    printf("Address of next node\n");
    while(head != NULL){
        printf("%d\t\t\t", head);
        printf("%d\t\t\t", head->data);
        printf("%d\t\n", head->next);
        head = head->next;
    }
}

struct Node * deleteHead(struct Node * head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
    //O(1)
}

struct Node * deleteAtIndex(struct Node * head, int index){
    struct Node * p = head;
    struct Node * q = head->next;
    for(int i=0; i<index-1;i++){
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct Node * deleteLastNode(struct Node * head){
    struct Node * p = head;
    struct Node * q = head->next;
    while(q->next  != NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

struct Node * deleteData(struct Node * head, int data){
    struct Node * p = head;
    struct Node * q = head->next;
    while(q->data != data && q->next !=NULL){
        p = p->next;
        q = q->next;
    }
    if(q->data == data){
        p->next = q->next;
        free(q);
    }
    return head;

}

int main(){
    struct Node * head  = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second  = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third  = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fourth  = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fifth  = (struct Node *)malloc(sizeof(struct Node));
    
    head->data = 3;
    head->next = second;

    second->data = 6;
    second->next = third;

    third->data = 2;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 9;
    fifth->next = NULL;

    traverseList(head);
    printf("\n");
    head = deleteHead(head);
    traverseList(head);
    printf("\n");
    head = deleteAtIndex(head, 1);
    traverseList(head);
    printf("\n");
    head = deleteLastNode(head);
    traverseList(head);
    printf("\n");
    head = deleteData(head, 4);
    traverseList(head);
    printf("\n");

    return 0;
}