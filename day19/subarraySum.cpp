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
    int curr_sum;
    for(int i = 0; i < size; i++){
        curr_sum = arr[i];
        for(int j = i+1; j < size; j++){
            if(curr_sum == sum){
                printf("%d %d", i+1, j);
                return 0;
            }
            if(curr_sum > sum || j == 0){
                break;
            }
            curr_sum = curr_sum + arr[j];
        }
    }

    return -1;
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
        if(subArray(arr, size, sum) == -1){
            printf("-1");
        }
    }

    return 0;
}