#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long

int main(){
    fastio;
    int N;
    cin>>N;
    ll A[N];
    ll ans = -1e18, msf = -1e18;
    
    for(int i = 0; i < N; ++i){ cin >> A[i]; }
    
    for(int i = 0; i < N; ++i){
        msf = max(A[i], msf+A[i]);
        ans = max(ans, msf);
    }
    
    cout << ans << "\n";
    
    return 0;
}