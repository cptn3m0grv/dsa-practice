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
        int K;
        cin>>K;
        vector<int> V;
        int prev=0;
        for(int i = 0; i < N; ++i){
            if(A[i]==K&&V.size()==0){
                V.push_back(i);
                prev = i;
            }else if(A[i]!=K && A[prev]==K &&V.size()==1){
                V.push_back(i-1);
                break;
            }
        }
        if(V.size()!=0){
            cout << V[0] << " " << V[1] << "\n";
        }else{
            cout << "-1\n";
        }
        
    }
    return 0;
}