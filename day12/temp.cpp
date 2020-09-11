#include<iostream>
using namespace std;

template<class T>
T getMin(T a, T b){
    return (a < b ? a : b);
}

int main(){
    cout << getMin<int>(3, 5) << endl << getMin<float>(2.3, 1.3) << endl << getMin<char>('t', 'g') << endl;
    cout << getMin(3, 5) << endl << getMin(1.1, 0.4) << endl << getMin('a', 'b') << endl;

    return 0;
}