#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    int t;
    cin>>t;
    while(t-- > 0){
        int N, M;
        cin>>N>>M;
        int A1[N], A2[M];
        for(int i = 0; i < N; ++i){
            cin>>A1[i];
        }
        for(int i = 0; i < M; ++i){
            cin>>A2[i];
        }
        map<int, int> h;
        for(int i = 0; i < N; ++i){
            ++h[A1[i]];
        }
        for(int i = 0; i < M; ++i){
            if(h[A2[i]]>0){
                for(int j = 0; j < h[A2[i]]; ++j){
                    cout << A2[i] << " ";
                }
                h[A2[i]]=-1;
            }
        }
        vector<int> V;
        for(auto el: h){
            if(el.second != -1){
                for(int i = 0; i < el.second; ++i){
                    V.push_back(el.first);
                }
            }
        }
        sort(V.begin(), V.end());
        for(auto el: V){
            cout << el << " ";
        }
        cout << "\n";
    }
    return 0;
}