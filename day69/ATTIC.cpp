#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long

int main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll i, j;
        ll d = 0, l = 1;
        ll n;
        for(i=0; i < s.size();){
            if(s[i]!='.'){
                ++i;
            }else{
                n=0;
                for(j=i;j<s.size();++j){
                    if(s[j]=='.'){
                        ++n;
                    }else{
                        break;
                    }
                }
                if(l<(n+1)){
                    ++d;
                    l=n+1;
                }
                i=j+1;
            }
        }
        cout << d << "\n";
    }
    return 0;
}