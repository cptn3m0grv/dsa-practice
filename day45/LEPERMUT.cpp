#include <iostream>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)

int main() {
    fastio;
    int t;
    cin>>t;
    while(t>0)
    {
      int n,i,j;
      cin>>n;
      int k=0,l=0;
      int a[n];
      for(i=1;i<=n;i++)
      {
          cin>>a[i];
      }
      for(i=1;i<=n;i++)
      {
          for(j=i+1;j<=n;j++)
          {
              if(a[i]>a[j])
              {
                  k++;
              }
          }
          if(i<n)
          {
              if(a[i]>a[i+1])
              {
                  l++;
              }
          }
      }
      if(k==l)
      {
          cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }
        t--;
    }
	
	return 0;
}