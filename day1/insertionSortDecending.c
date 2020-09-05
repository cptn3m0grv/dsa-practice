#include<stdio.h>
void insertionSortDecending(int arr[], int n);
void printArray(int arr[], int n);
int main(){
    int arr[] = {1, 7, 34, 3, 0, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSortDecending(arr, n);
    printArray(arr, n);

    return 0;
}

void insertionSortDecending(int arr[], int n){
    int i, j, key;
    for(i=n-1; i>=0; i--){
        key = arr[i];
        j = i + 1;

        while(j<=n-1 && arr[j]>key){
            arr[j-1] = arr[j];
            j = j + 1;
        }
        arr[j-1] = key;
    }
}

void printArray(int arr[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}