#include<bits/stdc++.h>
using namespace std;

void sortR(vector<int>& V);
void insertR(vector<int>& V, int temp);

int main(){
    vector<int> V{-1, 2, 4, 1, 2, 4, 0, 2, 4, 12};
    sortR(V);
    for(auto x: V){
        cout<<x<<" ";
    }
    return 0;
}

void sortR(vector<int>& V){
    if(V.size()==1){
        return;
    }
    int temp = V[V.size()-1];
    V.pop_back();
    sortR(V);
    insertR(V, temp);
}

void insertR(vector<int>& V, int temp){
    if(V.size()==0||V[V.size()-1]<=temp){
        V.push_back(temp);
        return;
    }
    int val = V[V.size()-1];
    V.pop_back();
    insertR(V, temp);
    V.push_back(val);
}
