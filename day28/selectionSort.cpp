#include <bits/stdc++.h>
using namespace std;

void selectionSort(int *arr, int size){
    cout << "Originial Array: " ;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int i, j, temp, min, min_index;
    for(i = 0; i < size; i++){
        min = arr[i];
        min_index = i;
        for(j = i+1; j < size; j++){
            if(arr[j] < min){
                min = arr[j];
                min_index = j;
            }
        }
        temp = arr[i];
        arr[i] = min;
        arr[min_index] = temp;
    }

    cout << "Sorted Array: " ;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main(){
    int *arr;
    int size;
    cin >> size;
    arr = new int[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    selectionSort(arr, size);
    return 0;
}