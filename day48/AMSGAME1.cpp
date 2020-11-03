#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)
#define lli long long int
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    gcd(b, a % b);
}
int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        lli a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        lli ans = a[0];
        for (int i = 1; i < n; i++){
            ans = gcd(ans, a[i]);
        }
        cout << ans << "\n";
    }
    return 0;
}