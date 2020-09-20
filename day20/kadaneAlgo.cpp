#include <bits/stdc++.h>
using namespace std;

int maxSubarray(int arr[], int size) {  
    int maxSoFar = arr[0];
    int maxEndingHere = arr[0];
    for (int i = 1; i < size; i++) {    
        maxEndingHere = max(maxEndingHere + arr[i], arr[i]);  
        maxSoFar = max(maxSoFar, maxEndingHere);    
    }  
    return maxSoFar;
}

int main(){
    int test, size;
    scanf("%d", &test);
    while(test--){
        scanf("%d", &size);
        int arr[size];
        for(int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
        int max = maxSubarray(arr, size);
        printf("%d\n", max);
    }   
    return 0;
}