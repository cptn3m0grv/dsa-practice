#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string S,J;
        int count=0;
        cin>>J;
        cin>>S;
       for(long long int i=0;i<S.length();i++){
           for(long long int j=0;j<J.length();j++){
               if(S[i]==J[j]){
                   count++;
                   break;
               }
           }
       }
       cout<<count<<"\n";
    }
    return 0;
}