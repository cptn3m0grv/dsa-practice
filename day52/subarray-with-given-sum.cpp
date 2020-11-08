#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        int N, S;
        cin >> N >> S;
        vector<ll> V(N);
        
        for(int i = 0; i < N; ++i)
            cin >> V[i];
            
        int pivot = 0, sum = 0, flag = 0;
        for(int i = 0; i < N; ++i){
            sum += V[i];
            while(sum > S){
                sum-=V[pivot];
                ++pivot;
            }
            if(sum == S){
                cout << pivot+1 << " " << i+1 << "\n";
                flag = 1;
                break;
            }
            
        }
        if(flag == 0){
            cout << "-1\n";
        }
    }
    return 0;
}