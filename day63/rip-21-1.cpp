#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    int t;
    cin >>t;
    while(t-- > 0){
        int N;
        cin>>N;
        vector<int> V;
        bool flag = 0;
        if(N%21==0){
            flag = 1;
        }
        while(N!=0){
            V.push_back(N%10);
            N=N/10;
        }
        reverse(V.begin(), V.end());
        int size = V.size();
        for(int i = 1; i < size; ++i){
            if(V[i]==1 && V[i-1]==2){
                flag = 1;
                break;
            }
        }
    
        if(flag){
            cout << "The streak is broken!\n";
        }else{
            cout << "The streak lives still in our heart!\n";
        }
    }
    return 0;
}