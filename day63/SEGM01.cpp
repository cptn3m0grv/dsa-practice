#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    int t;
    cin>>t;
    while(t-- > 0){
        string s;
        cin>>s;
        int ans = 0, count = 0;
        for(int i = 0; i < s.size(); ++i){
            if(s[i]=='1'){
                ++count;
            }
        }
        for(int i = 0; i < s.size()-1; ++i){
            if(s[i]=='1'&& s[i+1]=='1'){
                ++ans;
            }
        }
        if(ans+1==count){
            cout << "YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}