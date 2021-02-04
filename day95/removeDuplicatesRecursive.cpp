#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long

string removeDuplicate(string s){
    if(s.size()==0){
        return "";
    }
    
    char ch = s[0];
    string ans = removeDuplicate(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return ch+ans;
}

void solve(){

        string s;
        cin>>s;

        string ans = removeDuplicate(s);
        
        cout << ans;
        cout << "\n";
}

int main(){
    fastio;
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
