#include <bits/stdc++.h>
using namespace std;

int sunlightReceived(int arr[], int size){
    int count = 0;
    int max = INT_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i] >= max){ //taking care of the buildings of equal height
            max = arr[i];
            count++;
        }
    }
    return count;
}

int main(){

    int test, size;
    scanf("%d", &test);
    while(test--){
        scanf("%d", &size);
        int arr[size];
        for(int i = 0 ; i < size; i++){
            scanf("%d", &arr[i]);
        }
        int buildingsCount = sunlightReceived(arr, size);
        printf("%d\n", buildingsCount);
    }
    return 0;
}