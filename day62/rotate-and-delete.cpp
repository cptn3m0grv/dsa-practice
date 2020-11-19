#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    int t; cin>>t;
    while(t-- > 0){
        int N;
        cin>>N;
        int A[N];
        for(int i = 0; i < N; ++i){
            cin>>A[i];
        }
        if(N==1){
            cout << A[0] << "\n";
        }else{
            if(N%2==0){
                cout << A[(int)floor((N-2)/4)+1] << "\n";
            }else{
                cout << A[(int)floor((N-3)/4)+2] << "\n";
            }
        }
    }
    return 0;
}