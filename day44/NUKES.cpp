#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(NULL)
#define ll long long

ll A, N, K;

int main(){
    cin >> A >> N >> K;
    for(int i = 0; i < K; ++i){
        cout << A%(N+1) << " ";
        A/=(N+1);
    }
    return 0;
}