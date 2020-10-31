#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<long> vl;
typedef vector<long long int> vlli;
typedef vector<int> vi;
//******************************************************
int n,a;
vi v;

void func(void)
{
    int step =0;
  for(int i=0;i<n;i++)
  {
      scanf("%d", &a);
      v.push_back(a);
  }
 
  while(*max_element(v.begin(), v.end()) != *min_element(v.begin(), v.end()))
  {
      sort(v.begin(), v.end());
      int c=*max_element(v.begin(), v.end()) ;
      int d =*min_element(v.begin(), v.end());
      for(int i=0;i<n-1;i++)
      {  
          v[i] = v[i] + (c-d);
      }
       step = step + (c-d);
  }
  cout<<step<<"\n";
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    scanf("%d", &n);
	    func();
	    v.clear();
	}
	return 0;
}
