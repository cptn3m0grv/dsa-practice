#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        ll A[N];
        stack<ll> st;
        vector<ll> V;
        
        for(int i = 0; i < N; ++i) cin >> A[i];
        // 1 3 2 4
        for(int i = N-1; i>=0; --i){
            if(st.size()==0){
                V.push_back(-1);
            }else if(st.size()>0 && st.top()>A[i]){
                V.push_back(st.top());
            }else if(st.size()>0 && st.top()<=A[i]){
                while(st.size()>0 && st.top()<=A[i]){
                    st.pop();
                }
                if(st.size()==0){
                    V.push_back(-1);
                }else{
                    V.push_back(st.top());
                }
            }
            st.push(A[i]);
        }
        
        for(int i = V.size()-1; i>=0; --i){
            cout << V[i]<<" ";
        }
        
        cout << "\n";
        
    }
    return 0;
}