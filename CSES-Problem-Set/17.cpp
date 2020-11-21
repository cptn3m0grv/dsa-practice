#include <bits/stdc++.h>
using namespace std;
int n, a;
set<int> s;

int main(){ 
    cin >> n;
    for(int i = 0; i< n; i++){
        cin >> a;
        s.insert(a);
    }
    cout << s.size() << "\n";
    return 0;
}