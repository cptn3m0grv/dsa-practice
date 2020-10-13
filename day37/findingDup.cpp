#include <bits/stdc++.h>
using namespace std;

int duplicate(vector<int>& V){
    int slow = V[0];
    int fast = V[0];
    do{
        slow = V[slow];
        fast = V[V[fast]];
    }while(slow != fast);

    fast = V[0];
    while(slow != fast){
        slow = V[slow];
        fast = V[fast];
    }

    return slow;
}

int main(){
    int arr[] = {1, 2, 4, 5, 3, 3, 7, 8};
    vector<int> V(arr, arr+8);
    cout << duplicate(V) << endl;
    return 0;
}