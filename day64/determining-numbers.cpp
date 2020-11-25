#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    int N; cin>>N;
    int A[N];
    int hash[(int)1e6+1]={0};
    for(int i = 0; i < N; ++i){
        cin>>A[i];
        ++hash[A[i]];
    }
    for(int i = 0; i < (int)1e6+1; ++i){
        if(hash[i]==1){
            cout << i << " ";
        }
    }
    cout << "\n";
}