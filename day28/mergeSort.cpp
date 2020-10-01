#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r){

    int i = l;
    int j = m+1;
    int k = l;

    int temp[r+1];

    while(i <= m && j <= r){
        if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            i++;
            k++;
        }else{
            temp[k] = arr[j];
            j++;
            k++;
        }
    }

    while(i <= m){
        temp[k] = arr[i];
        i++;
        k++;
    }

    while(j <= r){
        temp[k] = arr[j];
        j++;
        k++;
    }

    for(int a = l; i < r+1; i++){
        arr[a] = temp[a];
    }

}

void mergeSort(int arr[], int l, int r){

    if(l < r){
        int m = (l+r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << "Before sort: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
    mergeSort(arr, 0, size-1);
    cout << "After sort: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
    return 0;
}