#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
const int mXN = 1e9+1;
#define ll long long
vector<ll> dp(mXN);

ll coin(ll N){
    if((N/2 + N/3 + N/4) <= N){
        return N;
    }
    if(dp[N]){
        return dp[N];
    }
    dp[N] = coin(N/2)+coin(N/3)+coin(N/4);
    return dp[N];
}

int main(){
    fastio;
    ll N;
    while(cin >> N){
        cout << coin(N) << "\n";
    }
    return 0;
}