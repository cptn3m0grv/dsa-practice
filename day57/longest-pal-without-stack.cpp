#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int l = 0, r = 0, mXm = 0;
        int size = s.size();
        
        for(int i = 0; i < size; ++i){
            if(s[i]=='(')
                ++l;
            else
                ++r;
                
            if(l==r)
                mXm = max(mXm, 2*r);
            else if(r>l)
                l=r=0;
        
        }
        
        l=r=0;
        
        for(int i = size-1; i>=0; --i){
            if(s[i]=='(')
                ++l;
            else
                ++r;
        
            if(l==r)
                mXm=max(mXm, 2*l);
            else if(l>r)
                l=r=0;
        }
    
        cout << mXm << "\n";
    
    }
    return 0;
}