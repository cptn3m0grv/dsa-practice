#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fastio;
    int t; cin>>t;
    while(t--){
        string s, ans;
        cin >> s;
        int size = s.size();
        for(int i = 0; i < size; ++i){
            if(s[i]=='a'&&s[i+1]=='c'){
                s[i]=0;
                s[i+1]=0;
            }else if(s[i]=='b'){
                s[i]=0;
            }
        }
        for(int i = 0; i < size; ++i){
            if(s[i]!=0){
                ans+=s[i];
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
