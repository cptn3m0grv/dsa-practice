#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int size;
    int front;
    int rear;
    int* arr;
};

int isFull(struct Queue *q){
    if(q->rear == q->size - 1) return 1;
    return 0;
}

int isEmpty(struct Queue *q){
    if(q->front == q->rear) return 1;
    return 0;
}

void enqueue(struct Queue *q, int val){
    if(isFull(q)){ printf("The Queue is full."); }
    else{ 
        q->rear++;
        q->arr[q->rear] = val;
    }
}

void dequeue(struct Queue *q){
    if(isEmpty(q)) {printf("The Queue is empty.");}
    else{
        q->front++;
        int val = q->arr[q->front];
        printf("Dequeuing value %d", val);
    }
}

int main(){

    struct Queue q;
    q.size = 10;
    q.front = q.rear = -1;
    q.arr = (int *)malloc(q.size * sizeof(int)); 

    // enqueue(&q, 21);
    // if(isEmpty(&q)){ printf("Empty");}
    
    enqueue(&q, 12);
    enqueue(&q, 22);
    enqueue(&q, 2);
    enqueue(&q, 32);
    
    dequeue(&q);


    return 0;
}