#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long n;
    cin >> n;
    if(n == 1){
        cout << 1 << "\n";
        return 0;
    }
    if(n == 2 || n == 3){
        cout << "NO SOLUTION\n";
        return 0;
    }
    // n = 4
    // 2 4 1 3
    if(n%2 == 0){
        for(int i = 2; i <= n; i+=2)
            cout << i << " ";
        for(int i = 1; i <n; i+=2)
            cout << i << " ";
    }else{
        // n = 5
        // 4 2 5 3 1
        for(int i = n-1; i > 0; i-=2)
            cout << i << " ";
        for(int i = n; i > 0; i-=2)
            cout << i << " ";
    }
    cout << "\n";
    return 0;
    
}