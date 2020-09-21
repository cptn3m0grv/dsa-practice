#include <bits/stdc++.h>
using namespace std;

int searchK(int arr[], int k, int size){
   for(int i = 0; i < size; i++){
       if(arr[i] == k){
           return i;
       }
   }
   return -1;
}


int main(){

    int test, size, k;
    scanf("%d", &test);

    while(test--){
        scanf("%d", &size);
        int arr[size];
        for(int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
        scanf("%d", &k);
        int pos = searchK(arr, k, size);
        printf("%d\n", pos);
    }

    return 0;
}