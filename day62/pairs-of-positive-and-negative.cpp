#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    int t; cin>>t;
    while(t-- > 0){
        int N;
        cin >> N;
        int positiveHash[1001]={0}, negativeHash[1001] = {0};
        for(int i = 0; i < N; ++i){
            int a;
            cin >> a;
            if(a>0){
                ++positiveHash[a];
            }else if(a<0){
                ++negativeHash[(-1)*a];
            }
        }
        bool flag = 0;
        for(int i = 0; i<1001; ++i){
            if(positiveHash[i]>0&&negativeHash[i]>0){
                cout << (-1)*i << " " << i << " ";
                flag = 1;
            }
        }
        if(!flag){
            cout << 0;
        }
        cout << "\n";
    }
    return 0;
    
}