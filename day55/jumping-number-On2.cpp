#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool isJumping(int num){
    if(num == 0){
        return true;
    }
    
    if(num>0 && num<=10){
        return true;
    }
    vector<int> V;
    while(num > 0){
        V.push_back(num%10);
        num/=10;
    }
    bool flag = false;
    int count = 0;
    int size = V.size();
    if(abs(V[0]-V[1])==1){
        ++count;
        flag = true;
    }
    
    if(flag){
        for(int i = 1; i < size-1; ++i){
            if(abs(V[i]-V[i-1])==1 && abs(V[i]-V[i+1])==1){
                ++count;
            }
        }
        if(abs(V[size-1]-V[size-2])==1){
            ++count;
        }
    }else{
        return false;
    }
    
    return (count == size);
}
int main(){
    fastio;
    int t; cin >> t;
    while(t--){
        int range;
        cin >> range;
        for(int i = 0; i <= range; ++i){
            if(isJumping(i)){
                cout << i << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}