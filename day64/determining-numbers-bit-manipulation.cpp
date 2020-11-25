#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    int N;
    cin>>N;
    bool mark[(int)1e6+1] = {0};
    // 0^1 = 1
    // so next time when a number is XOR with 1, it gives zero since its first occurence has changed 0 to 1
    // only those numbers which occur once will have true value in the array
    for(int i = 0; i < N; ++i){
        int A;
        cin>>A;
        mark[A]=mark[A]^1;        
    }
    for(int i = 0; i < (int)1e6+1; ++i){
        if(mark[i]==1){
            cout << i << " ";
        }
    }
    cout << "\n";
    return 0;
}