#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    int t;
    cin>>t;
    while(t-- > 0){
        int N, M, X;
        cin>>N>>M>>X;
        int A[N], B[M];
        map<int, int> h;
        vector<int> V;
        for(int i = 0; i < N; ++i){
            cin>>A[i];
            if(X-A[i]!=0){
                h[A[i]]=X-A[i];
            }else{
                h[A[i]]=1;
            }
        }
        for(int i = 0; i < M; ++i){
            cin>>B[i];
        }
        for(int i = 0; i < M; ++i){
            if(h[X-B[i]]!=0 &&B[i]!=0){
                // cout << "(" << (X-B[i]) << " " << B[i] << ")";
                V.push_back(X-B[i]);
            }
            else if(B[i]==0 && h[X-B[i]]==1){
                V.push_back(X-B[i]);
            }
        }
        
        if(V.size()<1){
            cout << "-1\n";
        }else{
            
            sort(V.begin(), V.end());
        
            for(int i = 0; i < V.size(); ++i){
                cout << V[i] << " " << X-V[i];
                if(i!=V.size()-1){
                    cout << ", ";
                }
            }
            
            cout << "\n";
        }
    }
    return 0;
}