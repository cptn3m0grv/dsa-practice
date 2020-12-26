#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void increasing(int n, int N){
    if(n==N){
        cout << n << " ";
        return;
    }
    cout << n << " ";
    increasing(n+1, N);
}

void decreasing(int n){
    if(n==0){
        return;
    }
    cout << n << " ";
    decreasing(n-1);
}

int main(){
    fastio;
    int N;
    cin>>N;
    increasing(1, N);
    cout<<"\n";
    decreasing(N);
}