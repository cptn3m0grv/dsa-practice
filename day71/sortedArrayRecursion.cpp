#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

bool sorted(int A[], int n){
    if(n==1){
        return true;
    }
    
    bool prevSorted = sorted(A+1, n-1);
    return (A[0]<=A[1] && prevSorted);
}

int main(){
    fastio;
    int N;
    cin >> N;
    int A[N];
    for(int i = 0; i < N; ++i){
        cin>>A[i];
    }
    if(sorted(A, N)){
        cout << "The array is sorted !!";
    }else{
        cout << "The array is not sorted !!!";
    }
    return 0;
}