#include <bits/stdc++.h>
using namespace std;

int findEquil(int arr[], int size){

    if(size == 1){
        return size;
    }

    int sum = 0;
    for(int i = 0; i < size; i++){
        sum+=arr[i];
    }

    int curr_sum = 0;
    for(int i = size -1; i >= 0; i--){
        sum-=arr[i];
        curr_sum+=arr[i];

        if(sum - arr[i-1] == curr_sum){
            return i;
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
        for(int i=0; i < size; i++){
            scanf("%d", &arr[i]);
        }

        int eq = findEquil(arr, size);
        printf("%d\n", eq);
    }

    return 0;
}
