#include <bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)
#define ll long long

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        cpp_int a, b;
        cin >> a >> b;
        cout << __gcd(a, b)<< "\n";
    }
    return 0;
}