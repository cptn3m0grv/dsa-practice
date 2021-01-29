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
        int V[N];
        for(int i = 0; i < N; ++i){
            cin >> V[i];
        }
        vector<int> ans;
        int mXm = INT_MIN;
        for(int i = N-1; i>=0; --i){
            if(mXm < V[i]){
                mXm = V[i];
                ans.push_back(mXm);
            }
        }
        reverse(ans.begin(), ans.end());
        for(auto x: ans){
            cout << x << " ";
        }
        int mXmElement = *max_element(V, V+N);
        int count = 0;
        for(int i = 0; i < N; ++i){
            if(V[i]==mXmElement){
                ++count;
            }
        }
        cout << "\n";
        if(count > 1){
            cout <<"-1\n";
        }else{
            cout << mXmElement << "\n";
        }
    }
    
    return 0;
}
