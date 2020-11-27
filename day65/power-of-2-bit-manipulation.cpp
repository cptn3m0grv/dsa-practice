#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long

int main(){
    fastio;
    int N;
    cin>>N;
    int count = 0;
    for(int i = 0; i < N; ++i){
        ll x;
        cin>>x;
        if(!(x&(x-1))){
            ++count;
        }
    }
    cout << count << "\n";
    return 0;
}