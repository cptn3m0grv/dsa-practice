#include <bits/stdc++.h>
using namespace std;


int findMissing(int arr[], int size){
    int i;
    for(int i = 0; i < size; i++){
        if(arr[i] != i+1){
            return i+1;
        }
    }

    return 0;
}

int main(){

    int test, size;
    scanf("%d", &test);
    while(test--){
        scanf("%d", &size);
        int arr[size];
        int i;
        for(i = 0; i < size - 1; i++){
            scanf("%d", &arr[i]);
        }
        sort(arr, arr+size);
        int missing = findMissing(arr, size);
        printf("%d\n", missing);
    }

    return 0;
}