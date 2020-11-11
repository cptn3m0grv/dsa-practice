#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fastio;
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<int> st;
        st.push(-1);
        int mXm = 0;
        int size = s.size();
        for(int i=0; i<size; ++i){
            if(s[i]=='('){
                st.push(i);
            }else{
                st.pop();
                if(!st.empty()){
                    mXm = max(mXm, i-st.top());
                }
                if(st.empty()){
                    st.push(i);
                }
            }
        }
        cout << mXm << "\n";
    }
    return 0;
}