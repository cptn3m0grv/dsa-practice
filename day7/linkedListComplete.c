#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

struct Node * create(struct Node * head, int data){
    head->data = data;
    head->next = NULL;

    return head;
}

struct Node * insertAtHead(struct Node * head, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->data = data;
    ptr->next = head;
    
    return ptr;
}

struct Node * insertAtEnd(struct Node * head, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * temp = head;
    ptr->data = data;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = ptr;
    ptr->next = NULL;

    return head;
}

struct Node * deleteHead(struct Node * head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node * deleteEnd(struct Node * head){
    struct Node * p = head;
    struct Node * q = head->next;
    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;

}

void traverseList(struct Node * head){
    printf("Address of node\t\t");
    printf("Data at node\t");
    printf("Address of next node\n");
    while(head != NULL){
        printf("%d\t\t\t", head);
        printf("%d\t\t", head->data);
        printf("%d\n", head->next);
        head = head->next;
    }
}

int main(){
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    head->next = NULL;
    int choice;
    int data;
    printf("1. Create Linked List\n");
    printf("2. Enter data at beginning\n");
    printf("3. View Linked List\n");
    printf("4. Insert at the end\n");
    printf("5. Delete Head\n");
    printf("6. Delete the end\n");

    while(1){
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data for head node: ");
            scanf("%d", &data);
            head = create(head, data);
            break;
        
        case 2:
            printf("Enter the data to add at beginning: ");
            scanf("%d", &data);
            head = insertAtHead(head, data);
            break;
        
        case 3:
            traverseList(head);
            break;

        case 4:
            printf("Enter the data to add at the end: ");
            scanf("%d", &data);
            head = insertAtEnd(head, data);
            break;
        
        case 5:
            head = deleteHead(head);
            break;

        case 6:
            head = deleteEnd(head);
            break;

        default:
            break;
        }
    }

    return 0;
    
}