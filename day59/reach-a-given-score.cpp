#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long

int main(){
    fastio;
    int t; cin>>t;
    while(t-- > 0){
        ll N; cin>>N;
        
        long long int dp[N+1],i;
    	memset(dp, 0, sizeof(dp));
    	dp[0]=1; //for zero sum
    	
    	for(int i = 3; i <=N; ++i){
    	    dp[i]+=dp[i-3];
    	}
    	for(int i = 5; i<=N; ++i){
    	    dp[i]+=dp[i-5];
    	}
    	for(int i = 10; i<=N; ++i){
    	    dp[i]+=dp[i-10];
    	}
    	
    	cout << dp[N] << "\n"; 
    	 
    }
    return 0;
}