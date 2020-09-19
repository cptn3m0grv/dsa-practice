// This soution exceeds time limit and thus not optimized.

#include <bits/stdc++.h>
using namespace std;

int findEquillibrium(int arr[], int size){
    if(size == 1){
        return size;
    }

    for(int i = 0; i < size; i++){
        int sum_right = 0;
        int sum_left = 0;

        for(int j = i+1; j < size; j++){
            sum_right += arr[j];
        }

        for(int j = i-1; j >= 0; j--){
            sum_left +=arr[j];
        }

        if(sum_left == sum_right){
            return i+1;
        }

    }

    return -1;

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

        int equillibrium = findEquillibrium(arr, size);
        printf("%d\n", equillibrium);
    }

    return 0;
}