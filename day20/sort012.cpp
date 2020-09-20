#include <bits/stdc++.h>
using namespace std;

int main(){

    int test, size;
    scanf("%d", &test);

    while(test--){
        scanf("%d", &size);
        int arr[size];

        for(int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }

        sort(arr, arr+size);

        for(int i = 0; i < size; i++){
            printf("%d ", arr[i]);
        }
        
        printf("\n");
    }

    return 0;
}