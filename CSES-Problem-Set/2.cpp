// Missing Number


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n ;
    cin >> n;
    long long arr[n];
    long long sum = 0;
    for(long long i = 0; i <n-1; i++){
        cin >> arr[i];
        sum = sum + arr[i];
    }

    cout << (n*(n+1))/2 - sum << "\n";
    return 0;
}