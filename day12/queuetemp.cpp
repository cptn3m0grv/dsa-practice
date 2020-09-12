#include<iostream>
#define SIZE 10
using namespace std;
int count = 0;

template<class T>
class Queue{
    T data;
    T qu[SIZE];
    int top = -1;
    int bottom = -1;

    public:
        
        bool isEmpty(){
            if((top == -1 && bottom == -1) || (top == bottom && top == SIZE)) return true;
            return false;
        }

        bool isFull(){
            if(top == SIZE-1 && bottom == 0) return true;
            return false;
        }

        void enqueue(T data){
            if(isFull()) cout << "The queue is not empty.";
            else if(top == -1 && bottom == -1) {
                bottom++;
                top++;
                qu[top] = data;
                count++;
            }else{
                top++;
                qu[top] = data;
                count++;
            }
        }

        void dequeue(){
            if(isEmpty()) cout << "The queue is empty";
            else{
                bottom++;
            }
        }

        void printQueue(){
            int i;
            for(i=bottom; i<=top; i++){
                cout<< qu[i] << "\t";
            }
            cout<< endl;
        }
};

int main(){
    Queue<int> qu1;

    qu1.enqueue(3);
    qu1.enqueue(4);
    qu1.enqueue(5);
    qu1.enqueue(6);
    qu1.printQueue();

    qu1.dequeue();
    qu1.printQueue();

    qu1.dequeue();
    qu1.dequeue();
    qu1.dequeue();
    qu1.printQueue();

    return 0;
}