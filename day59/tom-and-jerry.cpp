#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fastio;
    int t; cin>>t;
    while(t-- > 0){
        int N;
        cin>>N;
        cout << (N-1)%2 << "\n";
    }
    return 0;
}