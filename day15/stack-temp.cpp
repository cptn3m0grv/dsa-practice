#include<iostream>
using namespace std;

template<typename Type>

class Stack{
    int top = -1;
    int size = 10;
    Type arr[10];

    public:
        int isEmpty(){
            return (top == -1) ? 1 : 0;
        }

        int isFull(){
            return (top == size - 1) ? 1 : 0;
        }

        void push(Type data){
            if(isFull()){
                cout << "Stack overflow!\n";
            }else{
                top++;
                arr[top] = data;
            }
        }

        Type pop(){
            if(isEmpty()){
                cout << "Stack underflow!\n";
                return -1;
            }
            Type val = arr[top];
            top--;
            return val;
        }

        void traverseStack(){
            int i;
            for(i = 0; i <= top; i++){
                cout << arr[i] << "\t";
            }
            cout << "\n";
        }

        int stackTop(){           
           if(isEmpty()) return -1;
           return top;
        }

        int stackBottom(){
            if(isEmpty()) return -1;
            return 0;
        }

        Type peek(int pos){
            if(top - pos + 1  < 0){
                printf("Not a valid position.");
                return -1;
            }else{
                return (arr[top - pos + 1]);
            }
        }

};

int main(){

    Stack<char> chStack;
    Stack<int> inStack;
    if(chStack.isEmpty()) cout << "The Character Stack is now empty.\n";
    if(inStack.isEmpty()) cout << "The Integer Stack is now empty.\n";

    chStack.push('g');
    inStack.push(1);
    chStack.push('a');
    chStack.push('u');
    chStack.push('r');
    inStack.push(2);
    chStack.push('a');
    chStack.push('v');

    chStack.traverseStack();
    
    chStack.pop();
    inStack.push(3);
    chStack.pop();
    chStack.pop();
    chStack.pop();

    cout << "The peek results in : " <<  chStack.peek(1) << "\n";
    cout << "The peek results in : " << inStack.peek(1) << "\n";
    

    inStack.traverseStack();

    chStack.traverseStack();

    inStack.pop();
    
    inStack.traverseStack();

    cout << "The char stack top is at pos: " << chStack.stackTop() << "\n";
    cout << "The char stack bottom is at pos: " << chStack.stackBottom() << "\n";
    return 0;

}