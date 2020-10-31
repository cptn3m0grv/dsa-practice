#include <bits/stdc++.h> 
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(NULL)

inline bool check(string& s,int idx) {
    if(s[idx]=='1' && s[idx+1]=='0' && s[idx+2]=='1')
        return true;
        
    if(s[idx]=='0' && s[idx+1]=='1' && s[idx+2]=='0')
        return true;
        
    return false;
}

bool helper(string& s) {
    int n=s.size();
    
    for(int i=0;i<n-2;i++)
        if(check(s,i))
            return true;
            
    return false;
}

int main() {
    fastio;
    int t;
    cin>>t;

    while(t--) {
        string s;
        cin>>s;

        bool res = helper(s);
        
        if(res)
            cout<<"Good"<<endl;
        else
            cout<<"Bad"<<endl;
    }

    return 0;
}