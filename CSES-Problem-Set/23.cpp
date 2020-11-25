#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fastio;
    int N, T;
    cin>>N>>T;
    map<int, int> mp;
    for(int i = 0; i < N; ++i){
        int a;
        cin>>a;
        if(mp.find(T-a)!=mp.end()){
            cout << mp[T-a]+1 << " " << i+1 <<"\n";
            return 0;
        }
        mp[a]=i;
    }
    cout << "IMPOSSIBLE";
    return 0;
}