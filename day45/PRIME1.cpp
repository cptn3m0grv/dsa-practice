#include <bits/stdc++.h> 
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(NULL)
#define ll long long

bool is_prime(int n)
{     
      if(n==1)
      return false;
      if(n==2||n==3)
      return true;
      for( int i=2;i*i<=n;i++)
      {
            if(n%i==0)
            return false;
      }
      return true;
}
int main() {
    fastio;
	int t;
	cin>>t;
	while(t--){
	       int m,n;
	      cin>>m>>n;
	      for(;m<=n;m++)
	      {
	            
	            if(is_prime(m))
	            cout<<m<<endl;
	      }
	      cout<<"\n";
	}
	return 0;
}