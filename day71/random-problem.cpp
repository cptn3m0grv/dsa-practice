// 11
// aa

// 53
// efghicde

// 6
// fghijk

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
string l = "abcdefghijklmnopqrstuvwxyz";

int main(){
    fastio;
    int t;
    cin>>t;
    while(t-- > 0){
        int t;
        cin>>t;
        vector<int> V;
        while(t>0){
            V.push_back(t%10);
            t/=10;
        }
        for(int i = V.size()-1; i>=0; --i){
            cout << l[V[i]-1];
            for(int j = 0; j < V[i]-1; ++j){
                cout<<l[V[i]+j];
            }
        }
        cout << "\n";
    }
    return 0;
}