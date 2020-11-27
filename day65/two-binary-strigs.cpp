#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    int t; cin>>t;
    while(t--){
        string x, y;
        cin>>x;
        cin>>y;
        reverse(x.begin(), x.end());
        reverse(y.begin(), y.end());
        int l = 0, r = 0;
        while(y[l]=='0'){
            ++l;
        }
        while(x[r]=='0'||r<l){
            ++r;
        }
        if(l>=r){
            cout << "0\n";
        }else{
            cout << (r-l) << "\n";
        }
    }
    return 0;
}