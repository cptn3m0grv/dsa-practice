#include <bits/stdc++.h>
using namespace std;

void findMaxSubArrayK(int arr[], int size, int windowSize);//{}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int size, k;
        scanf("%d%d", &size, &k);
        int arr[size];
        for(int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
        findMaxSubArrayK(arr, size, k);
        printf("\n");
    }
    return 0;
}