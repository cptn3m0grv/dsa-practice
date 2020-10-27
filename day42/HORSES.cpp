#include <bits/stdc++.h>
using namespace std;

void fastscan(int &number) { 
    bool negative = false; 
    register int c; 
    number = 0;
    c = getchar(); 
    if (c=='-') { 
        negative = true; 
        c = getchar(); 
    } 
  
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
    if (negative) 
        number *= -1; 
} 

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t; 
    fastscan(t);
    for(int i = 0; i < t; i++){
        int s;
        fastscan(s);
        int arr[s];
        for(int i = 0; i < s; i++){
            fastscan(arr[i]);
        }
        sort(arr, arr+s);
        int mxN = arr[1] - arr[0];
        for(int i = 0; i < s -1; i++){
            mxN = min(mxN, arr[i+1]-arr[i]);
        }
        cout << mxN << "\n";
    }
    return 0;
}