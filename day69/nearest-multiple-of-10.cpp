#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;


#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    int t;
    cin>>t;
    while(t-- > 0){
        int512_t N; 
        cin>>N;
        int512_t ans = N%10;
        if(ans<=5){
            cout << N-ans << "\n";
        }else{
            cout << N + (10-ans) << "\n";
        }
    }
    return 0;
}