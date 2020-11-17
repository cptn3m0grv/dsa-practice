#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    int t; cin>>t;
    while(t-- > 0){
        int N, k;
        cin >> N;
        int A[N];
        for(int i = 0; i < N; ++i){
            cin>>A[i];
        }
        cin>>k;
        queue<int> Q;
        for(int i = 0; i < k; ++i){
            if(A[i]<0){
                Q.push(A[i]);
            }
        }
        for(int i = k; i < N; ++i){
            
            if(Q.size()!=0){
                cout << Q.front() << " ";
            }else{
                cout << "0 ";
            }
            
            if(A[i-k]<0){
                Q.pop();
            }
            if(A[i]<0){
                Q.push(A[i]);
            }
        }
        if(Q.size()!=0){
            cout << Q.front() << " ";
        }else{
            cout << "0 ";
        }
        cout << "\n";
    }
    return 0;
}