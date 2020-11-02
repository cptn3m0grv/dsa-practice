#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)
#define ll long long

int main(){
    fastio;
    ll N, D;
    cin >> N >> D;
    int a[N];
    for(int i = 0; i < N; ++i) cin >> a[i];
    sort(a, a+N);
    int count = 0;
    for(int i = 0; i < N-1; ){
        if(a[i+1]-a[i] <= D){
            count += 1;
            i += 2;
        }else{
            i += 1;
        }
    }
    cout << count << "\n";
}