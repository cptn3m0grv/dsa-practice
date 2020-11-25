#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    int N; cin>>N;
    int A[N];
    for(int i = 0; i < N; ++i){
        cin>>A[i];
    }
    sort(A, A+N);
    int Q;
    cin>>Q;
    while(Q-- > 0){
        int P;
        cin>>P;
        int sum = 0;
        int count = 0;
        for(int i = 0; i < N; ++i){
            if(A[i]<=P){
                sum+=A[i];
                ++count;
            }else{
                break;
            }
        }
        cout << count << " " << sum << "\n";
    }
    return 0;
}