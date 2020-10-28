#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5) 
        count += n / i; 
        
    cout << count << "\n";
    return 0;
}