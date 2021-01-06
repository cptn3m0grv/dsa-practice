#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void reorder(vector<int> &V){
    int k = 0;
    for(int i = 0; i < V.size(); ++i){
        if(V[i]!=0){
            V[k]=V[i];
            ++k;
        }
    }
    
    for(int i = k; i < V.size(); ++i){
        V[i] = 0;
    }
}

int main(){
    fastio;
    vector<int> V{6, 0, 8, 2, 3, 0, 4, 0, 1};
    cout << "Before Reordering: ";
    for(auto x: V){
        cout << x << " ";
    }
    cout << "\n";
    cout << "After Reordering: ";
    reorder(V);
    for(auto x: V){
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}