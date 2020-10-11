// Given an array and a number k where k is smaller than size of array, we need to find the k’th smallest element in the given array. It is given that all array elements are distinct.

// Example:
// Input: arr[] = {7, 10, 4, 3, 20, 15}
// k = 3
// Output: 7

// This is a max-heap problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int size, k;
    scanf("%d%d", &size, &k);
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    priority_queue<int> max_heap;
    for(int i = 0; i < size; i++){
        max_heap.push(arr[i]);
        if(max_heap.size() > k){
            max_heap.pop();
        }
    }
    cout << max_heap.top() << endl;
    return 0;
}