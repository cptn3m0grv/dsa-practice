#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fastio;
    int t; cin>>t;
    while(t--){
        int N;
        cin>>N;
        int A[N];
        bool flag = true;
        bool isPresent[N+1] = {false};
        
        for(int i = 0; i < N; ++i){ cin >> A[i]; }
        
        for(int i = 0; i < N; ++i){
            if (A[i] > 0 && A[i] <= N) 
                isPresent[A[i]] = true;
        }
        
        for (int i = 1; i <=N; i++) {
            if (!isPresent[i]){ 
                cout << i << "\n";
                flag = false;
                break;
            }
        }
        
        if(flag){
            cout << N+1 << "\n";
        }
        
    }
    return 0;
}