#include<iostream>
#include<ctime>
using namespace std;
void selectionSort(int arr[], int size){
    int i, j, key;
    for(i=1; i<size; i++){
        key = arr[i];
        j = i - 1;
        while(j>0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;        
    }
}
int binarySearch(int arr[], int left, int right, int key){
    int m = (left + right) / 2;
    if(arr[m] == key){
        return m;
    }else if(key > arr[m]){
        binarySearch(arr, m+1, right, key);
    }else if(key < arr[m]){
        binarySearch(arr, left, m-1, key);
    }else{
        return -1;
    }
}
int main(){
    int arr[] = {1, 6, 8, 9, 2, 4, 5, 11, 5, 6, 7};
    int size  = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, size);
    int key;
    while(1){
        printf("Enter the key: ");
        scanf("%d", &key);
        int pos = binarySearch(arr, 0, size-1, key);
        printf("Element %d found at pos: %d\n", key, pos);    
    }
    return 0;
}