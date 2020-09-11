#include<iostream>
using namespace std;

int calculateLCM(int a, int b){
    int min = a > b ? b : a;
    int max = a > b ? a : b;
    for(int i = 1; i <= min; i++){
        if(max*i % min == 0) return (max*i);
    }
    return 0;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << "The LCM of " << a << " and " << b << " is " << calculateLCM(a, b);
    return 0;
}