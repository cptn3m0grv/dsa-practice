#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sortWave(int arr[], int n){
    for(int i = 0; i < n; i+=2){
        
        if (i>0 && arr[i-1] > arr[i] ) 
            swap(&arr[i], &arr[i-1]); 
  
        if (i<n-1 && arr[i] < arr[i+1] ) 
            swap(&arr[i], &arr[i + 1]); 
    }
}

int main(){
    fastio;
    int t, N, a;
    cin >> t;
    while(t--){
        cin >> N;
        int a[N];
        for(int i = 0; i < N; ++i) cin >> a[i];
        sortWave(a, N);
        for(int i = 0; i < N; ++i) cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}