#include <bits/stdc++.h>
using namespace std;

// scanf and printf are faster than cin and cout 

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
        sort(arr, arr+size);
        printf("%d\n", arr[k-1]);        
    }

    return 0;
}