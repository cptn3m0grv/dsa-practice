#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(NULL)

int main () {
    fastio;
	int t, ans, N, y; 
	cin>>t;
	while (t--) {
		cin >> N;
		ans = INT_MAX;
		y = 0;
		for (int i = sqrt(N); i > 0; i--) {
			if (N % i == 0) {
				y = N/i;
				ans = y-i;
				break;
			}
		}
		cout<<ans<<'\n';
	}
	return 0;
}