#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long

int main(){
    fastio;
    int t; cin>>t;
    while(t-- > 0){
        ll N;
        cin>>N;
        if(N%9==0){
            cout << "9\n";
        }else{
            cout<<N%9<<"\n";
        }
    }
    return 0;
}