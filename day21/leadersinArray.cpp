#include <bits/stdc++.h>
using namespace std;

// void leadersInArray(int arr[], int size){
//     int max;
//     for(int i=0; i < size-1; i++){
//         max = arr[i];
//         for(int j = 0; j < size; j++){
//             if(arr[j] > max){
//                 max = arr[j];
//                 break;
//             }
//         }
//         if(max == arr[i]){
//             printf("%d ", max);
//         }
//     }
//     printf("%d", arr[size-1]);
// }

void leadersInArray(int arr[], int size){
    vector<int> A;
    int max = INT_MIN;
    for(int i = size - 1; i >= 0; i--){
        if(arr[i] >= max){
            A.push_back(arr[i]);
            max = arr[i];
        }
    }

    for(auto iter = A.rbegin(); iter != A.rend(); iter++){
        cout << *iter << " ";
    }
    cout << endl;
}

int main(){
    int test, size;
    scanf("%d", &test);
    while(test--){
        scanf("%d", &size);
        int arr[size];
        for(int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
        leadersInArray(arr, size);
    }
    return 0;
}