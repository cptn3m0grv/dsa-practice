#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    string s;
    getline(cin, s, '\n');
    int hash[128]={0};
    int mXm=INT_MIN, chr;
    int prev = mXm;
    for(int i = 0; i < s.size(); ++i){
        ++hash[s[i]];
    }
    for(int i = 0; i < 128; ++i){
        prev = mXm;
        mXm = max(mXm, hash[i]);
        if(prev!=mXm){
            chr=i;
        }
    }
    cout << (char)chr << " " << mXm;
    return 0;
}