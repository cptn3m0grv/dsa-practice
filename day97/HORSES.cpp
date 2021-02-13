#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long

void solve(){
    int N;
    cin>>N;
    vector<ll> V(N);
    for(int i=0;i<N;++i){
        cin>>V[i];
    }
    
    sort(V.begin(), V.end());
    ll mXm = INT_MAX;
    for(int i=0;i<N-1;++i){
        if(V[i+1]-V[i]<mXm){
            mXm = V[i+1]-V[i];
        }
    }
    
    cout << mXm << "\n";
}

int main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
