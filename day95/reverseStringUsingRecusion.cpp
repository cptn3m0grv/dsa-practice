#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void rev(string s, string &ans){
    if(s==""){
        return;
    }
    
    rev(s.substr(1), ans);
    ans+=s[0];
}


void solve(){
    string s;
    cin>>s;
    string ans;
    
    rev(s, ans);
    
    cout << ans << "\n";
}

int main(){
    fastio;
    
    int t=1;
    // cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}
