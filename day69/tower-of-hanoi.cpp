#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int cnt;

void towerOfHanoi(int N, int src, int helper, int dest){
    if(N==0){
        return;
    }
    towerOfHanoi(N-1, src, dest, helper);
    cout << "move disk " << N << " from rod " << src << " to rod " << dest << "\n";
    ++cnt;
    towerOfHanoi(N-1, helper, src, dest);
}

int main(){
    fastio;
    int t;
    cin>>t;
    while(t-- > 0){
        int N;
        cin>>N;
        cnt = 0;
        towerOfHanoi(N, 1, 2, 3);
        cout << cnt << "\n";
    }
    return 0;
}