#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        int N, K;
        cin >> N >> K;
        stack<int> st;
        int A[N];
        for(int i =0; i < N; ++i) cin >> A[i];
        
        for(int i = 0; i < N; ++i){
            if(st.size()<K){
                st.push(A[i]);
            }else{
                while(!st.empty()){
                    cout << st.top() << " ";
                    st.pop();
                }
                st.push(A[i]);
            }
        }
        while(!st.empty()){
            cout << st.top() << " ";
            st.pop();
        }
        cout << "\n";
    }
    return 0;
}