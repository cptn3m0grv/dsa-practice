#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void replaceS(string s, string &ans){
    if(s.size()==0){
        return;
    }
    
    if(s[0]=='p'&&s[1]=='i'){
        ans+="3.14";
        replaceS(s.substr(2), ans);
    }else{
        ans+=s[0];
        replaceS(s.substr(1), ans);
    }
    
}

void solve(){
    string s;
    cin>>s;
    
    string ans;
    replaceS(s, ans);
    
    cout<<ans<<"\n";
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
