#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        //taking size of array
        int N;
        cin >> N;
        vector<int> V(N);
        // array input 
        for(int i = 0; i < N; ++i){
            cin>>V[i];
        }
        // k input
        int K;
        cin>>K;
        
        //temp array, will be used in the last step
        int temp[N];
        for(int i = 0; i < N; ++i){
            temp[i] = V[i];
        }
        
        //sorting the original array in descending order
        sort(V.begin(), V.end(), greater<int>());
        
        //removing duplicates from the original array in-place
        int j = 0;
        for(int i = 0; i < N-1; ++i){
            if(V[i]!=V[i+1]){
                V[j++]=V[i];
            }
        }
        V[j++] = V[N-1];
        
        // j is the size till non-duplicate elements
        // storing the uniques elements in a separate array of size j
        int unique[j];
        for(int i = 0; i < j; ++i){
            unique[i]=V[i];
        }
        // since the original array was in descending order, the unique array will also be in decending order
        
        // K size array to store the marks of K toppers
        int topper[K];
        for(int i = 0; i < K; ++i){
            topper[i]=unique[i];
        }
        
        for(int i = 0; i < K; ++i){
            for(int m = 0; m < N; ++m){
                //temp is the original array to get original indices
                if(topper[i]==temp[m]){
                    cout << m << " "; 
                }
            }
        }
        
        //time O(KN)
        //space O(N)
        cout << "\n";
    }
    
    return 0;
}
