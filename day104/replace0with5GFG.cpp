// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    int i = 1;
    int nn = 0;
    while(n){
        int temp = n%10;
        if(temp==0){
            nn += 5*i;
        }else{
            nn += temp*i;
        }
        i*=10;
        n/=10;
    }
    return nn;
}
