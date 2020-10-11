#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int i, int j){
    if(i >= j){
        return 0;
    }
    int mn = INT_MAX;

    for(int k = i; k <= j-1; k++){
        int t = solve(arr, i, k) + solve(arr, k+1, j) + arr[i-1]*arr[k]*arr[j];
        if(t < mn){
            mn = t;
        }
    }

    return mn;
}

int main(){
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    cout << solve(arr, 1, size-1) << endl;
    return 0;
}