// Given a sequence A of size N, find the length of the longest increasing subsequence from a given sequence .
// The longest increasing subsequence means to find a subsequence of a given sequence in which the subsequence's elements are in sorted order, lowest to highest, and in which the subsequence is as long as possible. This subsequence is not necessarily contiguous, or unique.

// Note: Duplicate numbers are not counted as increasing subsequence.

// Input:
// The first line contains an integer T, depicting total number of test cases. Then following T lines contains an integer N depicting the size of array and next line followed by the value of array.

// Output:
// For each testcase, in a new line, print the Max length of the subsequence in a separate line.

// Constraints:
// 1 ≤ T ≤ 100
// 0 ≤ N ≤ 1000
// 0 ≤ A[i] ≤ 300

// Example:
// Input:
// 2
// 16
// 0 8 4 12 2 10 6 14 1 9 5 13 3 11 7 15
// 6
// 5 8 3 7 9 1

// Output:
// 6
// 3

#include <bits/stdc++.h>
using namespace std;

int longestIncreasingSubsequence(int arr1[], int size){

    int arr2[size];

    arr2[0] = 1;

    for(int i = 1; i < size; i++){
        arr2[i] = 1;
        for(int j = 0; j < i; j++){
            if(arr1[i] > arr1[j]  && arr2[i] < arr2[j] + 1){
                arr2[i] = arr2[j] + 1;
            }
        }
    }

    int mx = INT_MIN;

    for(int i = 0; i < size; i++){
        mx = max(arr2[i], mx);
    }

    return mx;

}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int size;
        scanf("%d", &size);
        int arr1[size];
        for(int i = 0; i < size; i++){
            scanf("%d", &arr1[i]);
        }
        printf("%d\n", longestIncreasingSubsequence(arr1, size));
    }
    return 0;
}