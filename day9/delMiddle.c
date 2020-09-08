#include<stdio.h>
#include<stdlib.h>

struct Node{
    char data;
    struct Node * next;
};

struct Node * deleteThisNode(struct Node * middle){

    struct Node * ne = middle;
    ne = ne->next;
    middle->data = ne->data;
    middle->next = ne->next;

    return ne;
    
}

void traverseList(struct Node * head){
    while(head != NULL){
        printf("%c\t", head->data);
        head = head->next;
    }
}

int main(){
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fifth = (struct Node *)malloc(sizeof(struct Node));
    struct Node * sixth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 'a';
    head->next = second;
    second->data = 'b';
    second->next = third;
    third->data = 'c';
    third->next = fourth;
    fourth->data = 'd';
    fourth->next = fifth;
    fifth->data = 'e';
    fifth->next = sixth;
    sixth->data = 'f';
    sixth->next = NULL;

    traverseList(head);
    printf("\n");
    third->next = deleteThisNode(fourth);
    traverseList(head);

    return 0;
}