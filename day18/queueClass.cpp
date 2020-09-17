#include<iostream>
using namespace std;

template<typename T>

class Queue{
    private:
        int size = 10;
        int front;
        int rear;
        T* arr;
    
    public:
        Queue(){
            front = -1;
            rear = -1;
            arr = (T *)calloc(size, sizeof(T));
        }

        bool isEmpty(){
            return (front == -1 && rear == -1) ? true : false;
        }

        bool isFull(){
            return (rear == size -1) ? true : false;
        }

        void enqueue(T val){
            if(isFull()){ 
                cout << "The queue is alreay full." << endl; 
                return;
            }elseif(isEmpty()){
                rear = 0;
                front = 0;
            }else{
                rear++;
            }

            arr[rear] = val;
        }

        T dequeue(){
            T DQ;
            if(isEmpty()){
                cout << "The queue is empty.\n";
                return 0;
            }else if(front == rear){
                DQ = arr[front];
                arr[front] = 0;
                front = rear = -1;
                return DQ;
            }else{
                DQ = arr[front];
                arr[front] = 0;
                front++;
                return DQ;
            }
        }

        int count(){
            return (rear - front + 1);
        }
};

int main(){
    Queue<int> q;

    q.enqueue(32);
    q.enqueue(12);

    cout << "Removed : " << q.dequeue() << endl;

    return 0;
}