#include <bits/stdc++.h>
using namespace std;

void fastscan(int &number) { 
    bool negative = false; 
    register int c; 
    number = 0;
    c = getchar(); 
    if (c=='-') { 
        negative = true; 
        c = getchar(); 
    } 
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
    if (negative) 
        number *= -1; 
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t, G, I, N, Q;
    fastscan(t);
    while(t--){
        fastscan(G);
        while(G--){
            fastscan(I);
            fastscan(N);
            fastscan(Q);
            if (N % 2 == 0 || I == Q)
                 printf("%d\n",N/2);
            else
                 printf("%d\n", (N/2) + 1);
        }
    }
    return 0;
}