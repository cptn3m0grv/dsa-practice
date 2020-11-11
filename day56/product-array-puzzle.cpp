#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fastio;
    int t; cin>>t;
    while(t--){
        int N;
        cin >> N;
        int A[N];
        int prod = 1;
        
        for(int i=0; i<N; ++i){ cin>>A[i]; prod*=A[i]; }
        
        for(int i=0; i<N; ++i){
            cout << prod/A[i] <<" ";
        }
        cout << "\n";
    }
    return 0;
}