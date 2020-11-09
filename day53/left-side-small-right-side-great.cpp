#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
const int mXm = 1e9;
const int mNm = -1e9;

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        int A[N], maxL[N], minR[N];
        int m;
        bool flag = false;
        
        for(int i = 0; i < N; ++i) cin >> A[i];
        
        m = mNm;
        for(int i = 0; i < N; ++i){
            m = max(m, A[i]);
            maxL[i] = m;
        }
        m = mXm;
        for(int i = N-1; i >= 0; --i){
            m = min(m, A[i]);
            minR[i] = m;
        }
        
        for(int i = 1; i < N-1; ++i){
            if(A[i]>=maxL[i] && A[i]<=minR[i]){
                cout << A[i] << "\n";
                flag = true;
            }
            if(flag){ 
                break;
            }
        }
        if(!flag){
            cout <<"-1\n";
        }
    }
    return 0;
}