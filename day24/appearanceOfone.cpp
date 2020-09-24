#include <bits/stdc++.h>
using namespace std;
void getIndex(vector<int> v, int K) 
{ 
    auto it = find(v.begin(), v.end(), K); 
    if (it != v.end()) {
        int index = distance(v.begin(), it); 
        printf("%d\n", index); 
    } 
    else {
        printf("-1\n"); 
    } 
} 
int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int size;
        scanf("%d", &size);
        int arr[size];
        for(int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
        vector<int> A(arr, arr+size); 
        getIndex(A, 1); 
    }
    return 0;
}