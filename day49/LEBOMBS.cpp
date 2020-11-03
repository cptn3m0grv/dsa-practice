#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        int ans = 0;
        // int N;
        // cin >> N;
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); ++i){
            if(i==0 && s[i] == '0' && s[i+1] == '0'){
                ans += 1;
            }else if(i == s.size()-1 && s[i] == '0' && s[i-1] == '0'){
                ans += 1;
            }else{
                if(s[i] == '0' && s[i+1] == '0' && s[i-1] == '0'){
                    ans += 1;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}