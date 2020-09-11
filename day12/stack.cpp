#include<iostream>
#define SIZE 10

using namespace std;
int count = 0;

struct Stack{
    int item[SIZE];
    int top;
};

typedef struct Stack st;

void createEmptyStack(st *s){
    s->top = -1;
}

bool isFull(st *s){
    if(s->top == SIZE-1){
        return true;
    }else{
        return false;
    }
}

void push(st *s, int data){
    if(isFull(s)){

    }else{
        s->top ++;
        s->item[s->top] = data;
        count ++;
    }
}

void printStack(st *s){
    int i;
    cout << "Stack: ";
    for(i=0; i<count; i++){
        cout<< s->item[i] << endl;
    }
}

int main(){
    st *s = (st *)malloc(sizeof(st));

    createEmptyStack(s);

    push(s, 2);
    push(s, 5);

    printStack(s);

    return 0;
}
