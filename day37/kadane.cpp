#include <bits/stdc++.h>
using namespace std;

int maxSubarray(vector<int>& V){
    int sum = 0;
    int mxN = V[0];

    for(int x: V){
        sum += x;
        if(sum > mxN) mxN = sum;
        if(sum < 0) sum = 0;
    }

    return mxN;
}

int main(){
    vector<int> V{-2, -3, 4, -1, -2, 1, 5, -3};
    cout << maxSubarray(V) << endl;
    return 0;
}