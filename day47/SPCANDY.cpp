#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define fastio ios::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        lli n, k;
        cin >> n >> k;
        if (k == 0)
            cout << 0 << " " << n << endl;
        else
            cout << n / k << " " << n % k << endl;
    }
}