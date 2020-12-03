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
        vector<int> V;
        stack<pair<int, int>> st;
        
        for(int i  = 0; i < N; ++i){
            if(st.size()==0){
                V.push_back(-1);
            }else if(st.size()>0 && st.top().first>A[i]){
                V.push_back(st.top().second);
            }else if(st.size()>0 && st.top().first<=A[i]){
                while(st.size()>0 && st.top().first<=A[i]){
                    st.pop();
                }
                if(st.size()==0){
                    V.push_back(-1);
                }else{
                    V.push_back(st.top().second);
                }
            }
            st.push({A[i], i});
        }
        for(int i = 0; i < V.size(); ++i){
            cout << i-V[i] << " ";
        }
        cout<< "\n";
    }
    return 0;
}