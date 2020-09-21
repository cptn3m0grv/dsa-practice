#include <bits/stdc++.h>
using namespace std;

int findMajority(int arr[], int size){
    map<int, int> count;
    for(int i =0 ; i < size; i++){
        count[arr[i]]++;
    }
    for(auto iter: count){
        if(iter.second > size/2){
            return iter.first;
        }
    }

    return -1;
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
        int majority = findMajority(arr, size);
        printf("%d\n", majority);
    }

    return 0;
}