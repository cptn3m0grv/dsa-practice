#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    FASTIO;
    int A, B;
    cin >> A >> B;
    int k  = A - B;
    if((A-B) % 10 == 9) k--; else k++;
    cout << k << endl;
    return 0;
}