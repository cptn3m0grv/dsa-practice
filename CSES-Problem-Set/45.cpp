#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)
const int mxN=1e6;

int dp[mxN+1];
int n, x;
int a[101];

int main(){
    fastio;

    cin >> n >> x;

    for(int i = 0; i<=n; ++i){ cin >> a[i];}    
    
    for(int i = 1; i<=x; ++i){
        dp[i]=1e9;
        for(int j = 0; j <n; ++j)
            if(a[j]<=i)
                dp[i]=min(dp[i], dp[i-a[j]]+1);
    }

    if(dp[x]>=1e9)
        cout << -1;
    else
        cout << dp[x];
        
    return 0;
}