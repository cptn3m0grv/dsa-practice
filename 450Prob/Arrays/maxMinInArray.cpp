#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    
    int t;
    cin>>t;
    
    while(t--){
        int N;
        cin>>N;
        int mNm = INT_MAX;
        int mXm = INT_MIN;
        int x;
        for(int i = 0; i < N; ++i){
            cin>>x;
            if(mNm > x){
                mNm = x;
            }
            if(mXm < x){
                mXm = x;
            }
        }
        cout << mNm << " " << mXm << "\n";
    }
    
    return 0;
}
