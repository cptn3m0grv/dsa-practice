#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fastio;
    int t; cin >> t;
    while(t--){
        int N; cin >> N;
        int A[N];
        for(int i = 0; i < N; ++i) cin >> A[i];
        
        for(int i =0; i < N-1; ++i){
            if(A[i+1]!=0 && A[i]==A[i+1]){
                A[i] = 2*A[i];
                A[i+1]=0;
            }
        }
        int count = 0;
        vector<int> V;
        for(int i = 0; i < N; ++i){
            if(A[i]!=0){
                V.push_back(A[i]);
            }else{
                ++count;
            }
        }
        
        for(int i = 1; i <= count; ++i){
            V.push_back(0);
        }
        
        for(int i = 0; i < N; ++i) cout << V[i] << " ";
        
        cout << "\n";
        
    }
    return 0;
}