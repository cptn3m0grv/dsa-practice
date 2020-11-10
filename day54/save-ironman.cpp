#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fastio;
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string str, s;
        getline(cin, s);
        int ans = 0;
        for(int i = 0;i < s.size(); ++i){
            if((s[i]>='0'&&s[i]<='9')||(s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
                if(s[i]>='A'&&s[i]<='Z'){
                    str+=s[i]+32;
                }else{
                    str+=s[i];
                }
            }
        }
        string rev = string(str.rbegin(), str.rend());
        for(int i = 0; i < str.size(); ++i){
            if(rev[i]==str[i]){
                ++ans;
            }
        }
        if(ans == str.length()){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}