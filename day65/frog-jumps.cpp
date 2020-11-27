#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    int N; cin>>N;
    int A[N];
    for(int i = 0; i < N; ++i){
        cin>>A[i];
    }
    vector<int> dp(N, INT_MAX);
    dp[0]=0;
    for(int i = 0; i < N; ++i){
        for(int j: {i+1, i+2}){
            if(j<N){
                dp[j]=min(dp[j], dp[i]+abs(A[j]-A[i]));
            }
        }
    }
    cout << dp[N-1] << "\n";
}