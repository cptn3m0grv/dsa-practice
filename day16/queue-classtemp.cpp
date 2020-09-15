#include<iostream>
using namespace std;
#define SIZE 3
template<typename Type>
class Queue{
    // int size = 3;
    int front = -1;
    int rear = -1;
    Type arr[SIZE];

    public:
        // Queue(){
        //     front = rear = -1;
        // }

        int isFull(){
            if(rear == SIZE -1 ) return 1;
            return 0;
        }

        int isEmpty(){
            if(rear == front) return 1;
            return 0;
        }

        void enqueue(Type val){
            if(isFull()) cout << "The queue is already full.\n";
            else{
                rear++;
                arr[rear] = val;
            }
        }

        void dequeue(){
            if(isEmpty()) cout << "The queue is already empty.\n";
            else{
              front++;
              Type del = arr[front];
              cout << "Dequeing " << del << endl;  
            }
        }
};

int main(){

    Queue<int> inQueue;

    inQueue.enqueue(12);
    inQueue.enqueue(11);
    inQueue.enqueue(15);
    inQueue.enqueue(18);

    inQueue.dequeue();
    inQueue.dequeue();

    return 0;
}