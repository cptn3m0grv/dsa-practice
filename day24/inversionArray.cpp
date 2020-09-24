#include <bits/stdc++.h>
using namespace std;

int numberOfSwaps(int arr[], int size){
    int count = 0;
    int temp;
    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            if(arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                count++;
            }
        }
    }
    return count;
}

int main(){

    int test;
    scanf("%d", &test);
    while(test--){
        int size;
        scanf("%d", &size);
        int arr[size];
        for(int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
        int swaps = numberOfSwaps(arr, size);
        printf("%d\n", swaps);
    }

    return 0;
}