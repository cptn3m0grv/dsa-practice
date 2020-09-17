#include<iostream>
using namespace std;

template<typename T>
class Stack{
    private:
        int sizeOfStack = 5;
        int top;
        T *arr;
    
    public: 
        Stack(){
            top = -1;
            arr = (T *)calloc(sizeOfStack, sizeof(T));
        }

        bool isEmpty(){
            return (top == -1) ? true : false;
        }

        bool isFull(){
            return (top == sizeOfStack - 1) ? true : false;
        }

        void push(T val){
            if(isFull()) { cout << "Stack Overflow !!" << endl; }
            else{
                top++;
                arr[top] = val;
            }
        }

        T pop(){
            if(isEmpty()) { cout << "Stack underflow !!" << endl; return 0;}
            else{
                int popValue = arr[top];
                arr[top] == 0;
                top--;
                return popValue;
            }
        }

        int count(){
            return (top+1);
        }

        T peek(int pos){
            if(isEmpty()){
                cout << "Stack underflow !!!" << endl;
                return 0;
            }else{
                return arr[pos];
            }
        }

        void change(int pos, T val){
            arr[pos] = val;
            cout << "Value changed at location " << pos << endl;
        }

        void display(){
            cout << "All values in the stack are:  " << endl;
            int i;
            for(i = sizeOfStack - 1; i >= 0; i--){
                cout << arr[i] << endl;
            }
        }

};

int main(){

    Stack<int> s1;

    s1.push(4);
    s1.push(3);
    s1.push(6);
    s1.push(1);

    cout << "The value at pos 2 is " << s1.peek(2) << "." << endl;

    cout << "Popping out " << s1.pop() << " from the stack." << endl;

    cout << "There are " << s1.count() << " element(s) in the stack." << endl;

    s1.display();

    return 0;
}