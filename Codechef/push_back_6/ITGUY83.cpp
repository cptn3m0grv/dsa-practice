#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long


void solve(){
        int N;
        cin>>N;
        
        for(int i=1;i<=N;++i){
            for(int j=1;j<=i;++j){
                cout<<j;
                if(j!=i){
                    cout<<"*";
                }
            }
            cout<<"\n";
        }
}

int main(){
    fastio;
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

