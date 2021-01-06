#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void solve(vector<int> V){
    int size = V.size();
    int mXm = INT_MIN;
    int mNm = INT_MAX;
    
    int rightIndex = size-1;
    int leftIndex = 0;
    
    for(int i = 0; i < size; ++i){
        if(mXm < V[i]){
            mXm = V[i];
        }
        
        if(mXm > V[i]){
            rightIndex = i;
        }
    }
    
    for(int i = size-1; i >= 0; --i){
        if(mNm > V[i]){
            mNm = V[i];
        }
        
        if(mNm < V[i]){
            leftIndex = i;
        }
    }
    
    cout << "Left Index to sort from: " << leftIndex << "\n";
    cout << "Right Index to sort till: " << rightIndex << "\n";
    
    cout << "Elements to be sorted: " ;
    for(int i = leftIndex; i <= rightIndex; ++i){
        cout << V[i] << " ";
    }
    cout << "\n";
}

int main(){
    fastio;
    
    vector<int> V{1, 2, 3, 7, 5, 6, 4, 8};
    
    solve(V);
    
    return 0;
}