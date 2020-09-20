#include <bits/stdc++.h>
using namespace std;

// Input:
// 2
// 5 12
// 1 2 3 7 5
// 10 15
// 1 2 3 4 5 6 7 8 9 10
// Output:
// 2 4
// 1 5

int subArray(int arr[], int size, int sum){
    int maxEndingHere = arr[0];
    int maxSoFar = arr[0];

    for(int i = 0; i < size; i++){
        maxEndingHere = max(maxEndingHere + arr[i], arr[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    return maxSoFar;
}

int main(){

    int test, size, sum;
    scanf("%d", &test);

    while(test--){
        scanf("%d", &size);
        scanf("%d", &sum);
        int arr[size];
        for(int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
        int maxSubArray = subArray(arr, size, sum);
    }

    return 0;
}