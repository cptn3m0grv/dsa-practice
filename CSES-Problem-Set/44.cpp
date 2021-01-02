#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)

const int mxM=1e9+7, mxX=1e6;
int dp[mxX];

int main(){
    fastio;
    int n;
    cin >> n;
    dp[0] = 1;
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=min(6, i); ++j){
            dp[i]=(dp[i]+dp[i-j])%mxM;
        }
    }
    cout << dp[n];
}