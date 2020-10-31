#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fastio;
    int N, a, sum = 0;
    cin >> N;
    int Csum = N*(N+1)/2;
    for(int i = 0; i < N; ++i){
        cin >> a;
        sum += a;
    }
    if(sum == Csum){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    return 0;
}