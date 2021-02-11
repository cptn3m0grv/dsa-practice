#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void towerOfHanoi(int N, char src, char dest, char help){
    if(N==0){
        return;
    }
    
    towerOfHanoi(N-1, src, help, dest);
    cout<<"Move from " << src << " to " << dest <<"\n";
    towerOfHanoi(N-1, help, dest, src);
}

void solve(){
    int N;
    cin>>N;
    
    towerOfHanoi(N, 'A', 'C', 'B');
    
    cout<<"\n";
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
