#include<iostream>
using namespace std;

#define SIZE 10

template<class T>
class stack{

    T data;
    T stck[SIZE];
    int top = -1;
    int count = 0;
    
    public:
        bool isEmpty(){
            if(top == -1) return true;
            return false;
        }

        bool isFull(){
            if(top == SIZE - 1) return true;
            return false;
        }

        void push(T data){
            if(isFull()) cout << "The stack is full.";
            else{
                top ++;
                stck[top] = data;
                count++;
            }
        }

        void pop(){
            if(isEmpty()) cout << "The stack is empty.";
            else{
                top --;
                count --;
            }
        }

        void peek(){
            if(isEmpty()) cout << "Stack empty, stack at -1";
            else{
                cout << "The stack top at index " << top << " and holds the data " << stck[top] << endl;
            }
        }

        void printStack(){
            int i;
            cout << "Stack: \n";
            for(i=0; i<count; i++){
                cout << stck[i] << "\t";
            }
            cout << endl;
        }

};

int main(){
    stack<int> st;
    
    st.push(3);
    st.push(2);
    st.push(1);
    st.push(5);
    st.push(9);
    st.peek();
    st.printStack();

    st.pop();
    st.pop();
    st.peek();
    st.printStack();

    st.push(10);
    st.peek();
    st.printStack();

    stack<char> cst;

    cst.push('a');
    cst.push('c');
    cst.push('e');
    cst.push('t');
    cst.push('q');
    cst.peek();
    cst.printStack();

    cst.pop();
    cst.pop();
    cst.peek();
    cst.printStack();

    cst.push('e');
    cst.peek();
    cst.printStack();


    return 0;
}