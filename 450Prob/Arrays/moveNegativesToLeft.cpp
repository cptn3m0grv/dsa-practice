#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void solve(){
    int N; cin>>N;
    vector<int> V(N);
    for(int i=0;i<N;++i) { cin>>V[i]; }
    
    int j=0;
    for(int i=0;i<N;++i){
        if(V[i]<0){
            swap(V[i], V[j]);
            j++;
        }
    }
    
    for(int i=0;i<N;++i) { cout<<V[i]<<" "; }
}

int main(){
    fastio;
    
    int t;
    cin>>t;
    while(t--) { solve(); cout <<"\n"; }
    
    return 0;
}
