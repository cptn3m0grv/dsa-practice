#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void solve(){
    int N;
    cin>>N;
    vector<int> V(N);
    for(int i=0;i<N;++i){
        cin>>V[i];
    }
    int mNm = INT_MAX;
    for(int i=0;i<N;++i){
        if(mNm>V[i]){
            mNm=V[i];
        }
    }
    
    int smNm = INT_MAX;
    for(int i=0;i<N;++i){
        if(smNm>V[i]&&V[i]>mNm){
            smNm=V[i];
        }
    }
    
    if(V[0]!=V[N-1]){
        cout<<mNm<<" "<<smNm<<"\n";
    }else{
        cout<<"-1\n";
    }
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
