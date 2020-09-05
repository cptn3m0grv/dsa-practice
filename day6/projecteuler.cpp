#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
    int i;
    for(i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
    }
    return 0;
}
int main(){
    int count = 0;
    long long i;
    for(i=2; i<22222222222; i++){
        if(isPrime(i)){
            count ++;
        }
        if(count == 10001){
            cout<< i;
        }
    }
    return 0;
}