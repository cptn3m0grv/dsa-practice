#include<iostream>
using namespace std;

// Input:
// 2
// 5 12
// 1 2 3 7 5
// 10 15
// 1 2 3 4 5 6 7 8 9 10
// Output:
// 2 4
// 1 5

void subArray(int arr[], int size, int sum){
    int curr_sum, i, j;
    for(i = 0; i < size; i++){
        curr_sum = arr[i];
        for(j = i+1; j < size; j++){
            if(curr_sum == sum){
                cout << i+1 << " " << j << endl;
                return;
            }  
            if(curr_sum > sum || j == 0){
                break;
            }
            curr_sum = curr_sum + arr[j];
        }
    }
    cout << "-1";
}

int main(){
    int test, size, sum;
    cin >> test;

    while(test--){
        cin >> size;
        cin >> sum;
        int arr[size];
        for(int i = 0; i < size; i++){
            cin >> arr[i];
        }
        subArray(arr, size, sum);
    }

    return 0;
}