#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    int K, N;
    cin >> K >> N;
    vector<string> Vs;
    for(int i = 0; i < K; ++i){
        string inp;
        cin >> inp;
        Vs.push_back(inp);
    }
    
    for(int i=0;i<N;i++){
	    string s;
	    int g=0;

	    cin>>s;
	    if(s.size()>=47)
	        cout<<"Good\n";
	    else{
    	    for(int i=0;i<K;i++){
    	        if(s.find(Vs[i])!=-1){
    	            g=1;
                    cout<<"Good\n";
    	            break;
    	        }
    	    }
	        if(g==0)
	            cout<<"Bad\n";
	    }
	}
	return 0;
}
