#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int N;
        cin >> N;
        vector<int> V(N);
        for(int i = 0; i < N; ++i){
                cin>>V[i];
        }
        int start = 0;
        int end = N-1;
        int temp;
        while(start<end){
                temp = V[start];
                V[start] = V[end];
                V[end] = temp;
                start++;
                end--;
        }
        for(auto el: V){
                cout << el << " ";
        }
        cout << "\n";
    }
    return 0;
}

