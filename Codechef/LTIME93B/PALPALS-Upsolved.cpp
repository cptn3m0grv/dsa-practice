#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mXm 1000006
#define ll long long

void solve(){
    string s;
    cin>>s;
    int mp[26];
    for(int i=0; i<26; ++i){
        mp[i]=0;
    }
    for(int i=0; i<s.size(); ++i){
        ++mp[s[i]-'a'];
    }
    int count = 0, rem = 0;
    for(int i=0; i<26; ++i){
        count += mp[i]/2;
        if(mp[i]>0&&mp[i]%2==1){
            ++rem;
        }
    }
    
    if(rem<=count){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return;
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

