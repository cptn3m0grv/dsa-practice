#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fastio;
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        int h[26];
        memset(h, -1, sizeof(h));
        int st = 0, e = 0, ans = 1;
        for(int i = 0; i < s.size(); ++i){
            if(h[s[i]-'a']==-1){
                h[s[i]-'a'] = i;
                ++e;
            }else{
                if(h[s[i]-'a']<st){
                    h[s[i]-'a']=i;
                    ++e;
                }else{
                    st=h[s[i]-'a']+1;
                    h[s[i]-'a']=i;
                    ++e;
                }
            }
            
            ans = max(ans, (e-st));
        }
        
        cout << ans << "\n";
    }
    return 0;
}