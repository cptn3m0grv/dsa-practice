#pragma warning(disable:4786)
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<functional>
#include<string>
#include<cstring>
#include<cstdlib>
#include<queue>
#include<utility>
#include<fstream>
#include<sstream>
#include<cmath>
#include<stack>
#include<assert.h>
using namespace std;

#define MEM(a, b) memset(a, (b), sizeof(a))
#define CLR(a) memset(a, 0, sizeof(a))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(X) ( (X) > 0 ? (X) : ( -(X) ) )
#define S(X) ( (X) * (X) )
#define SZ(V) (int )V.size()
#define FORN(i, n) for(i = 0; i < n; i++)
#define FORAB(i, a, b) for(i = a; i <= b; i++)
#define ALL(V) V.begin(), V.end()
#define IN(A, B, C)  (B) <= (A) && (A) <= (C)

typedef pair<int,int> PII;
typedef pair<double, double> PDD;
typedef vector<int> VI;

#define AIN(A, B, C) assert(IN(A, B, C))

//typedef int LL;
//typedef long long int LL;
//typedef __int64 LL;

int a[102];

int main()
{
	int T, n, k, ans, i, j;

	scanf("%d", &T);
	AIN(T, 1, 1000);

	while(T--)
	{
		scanf("%d", &n);
		for(i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
			AIN(a[i], 1, 1000000000);
		}
		scanf("%d", &k);

		AIN(n, k, 100);
		AIN(k, 1, n);
		for(i = 0; i < n; i++)
			for(j = i + 1; j < n; j++)
				assert(a[i] != a[j]);

		ans = 0;
		for(i = 0; i < n; i++)
			ans += a[k - 1] > a[i];

		printf("%d\n", ans + 1);
	}

	return 0;
}
