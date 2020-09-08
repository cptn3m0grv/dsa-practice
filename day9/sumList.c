#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void traverseList(struct Node * head){
    while(head != NULL){
        printf("%d-->", head->data);
        head = head->next;
    }
    printf("null\n");
}

struct Node * addLists(struct Node * head, struct Node * head2, int carry){
    if(head == NULL && head2 == NULL && carry==0){
        return NULL;
    }
    struct Node * result = (struct Node *)malloc(sizeof(struct Node));
    int value = carry;
    if(head != NULL){
        value += head->data;
    }
    if(head2 != NULL){
        value += head2->data;
    }

    result->data = value % 10;

    if(head != NULL || head2 != NULL){
        struct Node * more  = addLists(head == NULL ? NULL : head->next, head2 == NULL ? NULL : head2->next, value >= 10 ? 1 : 0);
        result->next = more;
    }
    return result;
}

int main(){
    
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * two = (struct Node *)malloc(sizeof(struct Node));
    struct Node * three = (struct Node *)malloc(sizeof(struct Node));
    struct Node * head2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node * five = (struct Node *)malloc(sizeof(struct Node));
    struct Node * six = (struct Node *)malloc(sizeof(struct Node));

    int sum = 0;

    head->data = 7;
    head->next = two;

    two->data = 1;
    two->next = three;

    three->data = 6;
    three->next = NULL;

    head2->data = 5;
    head2->next = five;

    five->data = 9;
    five->next = six;

    six->data = 2;
    six->next = NULL;

    printf("first linked list\n");
    traverseList(head);
    printf("\n");
    printf("second linked list\n");
    traverseList(head2);
    printf("\n");
    struct Node * sumList = addLists(head, head2, 0);
    printf("sum linked list\n");
    traverseList(sumList);
    // printf("Sum is: %d", sum);

    return 0;
}