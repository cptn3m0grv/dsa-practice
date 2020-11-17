#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    int t; cin>>t;
    while(t-- > 0){
        string s;
        int k;
        cin.ignore();
        getline(cin,s);
        cin>>k;
        string ans;
        for(int i = 0; i < s.size(); ++i){
            if(s[i]==' '){
                ans+='%';
                ans+='2';
                ans+='0';
            }else{
                ans+=s[i];
            }
        }
        cout << ans <<"\n";
    }
    return 0;
}