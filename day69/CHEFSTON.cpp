#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    int t;
    cin>>t;
    while(t-- > 0){
        int N, K;
        cin >> N >> K;
        int A[N], B[N];
        for(int i = 0; i < N; ++i){ cin>>A[i]; }
        for(int i = 0; i < N; ++i){ cin>>B[i]; }
        long long mXm = INT_MIN;
        for(int i = 0; i < N; ++i){
            long long stones = K/A[i];
            mXm = max(mXm, B[i]*stones);
        }
        cout << mXm <<"\n";
    }
    return 0;
}