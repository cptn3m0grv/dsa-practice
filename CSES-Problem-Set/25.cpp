#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long

int main(){
    fastio;
    int N;
    cin>>N;
    vector<int> V(N);
    ll ans = 0;
    
    for(int i = 0; i < N; ++i){ cin >> V[i]; }
    
    sort(V.begin(), V.end());
    int mDm = V[N/2];
    
    for(int i = 0; i < N; ++i){
        ans+=abs(mDm-V[i]);
    }
    
    cout << ans << "\n";
    
    return 0;
}