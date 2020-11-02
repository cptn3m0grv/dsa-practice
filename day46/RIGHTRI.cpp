#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)
#define ll long long

int dist(int x1, int yy, int x2, int y2){
    int x = x1-x2;
    int y = yy-y2;
    return (x*x)+(y*y);
}

int main(){
    fastio;
    int N;
    cin >> N;
    int count = 0;
    while(N--){
        int x1, yy, x2, y2, x3, y3; //yy = y2 (for some reason it says y1 already declared)
        cin >> x1 >> yy >> x2 >> y2 >> x3 >> y3;
        int a = dist(x1, yy, x2, y2);
        int b = dist(x2, y2, x3, y3);
        int c = dist(x3, y3, x1, yy);
        if(a + b == c){
            count += 1;
            continue;
        }if(a + c == b){
            count += 1;
            continue;
        }if(c + b == a){
            count += 1;
            continue;
        }
    }
    cout << count << "\n";
    return 0;
}