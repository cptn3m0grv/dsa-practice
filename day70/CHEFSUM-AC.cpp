#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    int t;
    cin>>t;
    while(t-- > 0){
        int N;
        cin>>N;
        int A[N];
        for(int i = 0; i < N; ++i){
            cin>>A[i];
        }
        int j = *min_element(A, A+N);
        int i;
        for(i = 0; i < N; ++i){
            if(A[i]==j){
                break;
            }
        }
        cout << i+1 << "\n";
    }
    return 0;
}