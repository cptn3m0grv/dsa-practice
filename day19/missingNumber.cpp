#include <bits/stdc++.h>
using namespace std;


int findMissing(int arr[], int size){
    int total = (size+1)*(size+2) / 2;
    for(int i = 0; i < size; i++){
        total -= arr[i];
    }

    return total;
}

int main(){

    int test, size;
    scanf("%d", &test);
    while(test--){
        scanf("%d", &size);
        size = size - 1;
        int arr[size];
        int i;
        for(i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
        sort(arr, arr+size);
        int missing = findMissing(arr, size);
        printf("%d\n", missing);
    }

    return 0;
}