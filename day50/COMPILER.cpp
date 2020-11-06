#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<char> st;
        int ans = 0;
        for(int i = 0; i < s.length(); ++i){
            if(st.empty()){ ans = i;}
            
            if(!st.empty() && s[i] == '>' && st.top() == '<'){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        if(st.empty())
            ans = s.size();
            
        cout << ans << "\n";
    }
    return 0;
}