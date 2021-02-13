// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
public:
	vector<int>bfsOfGraph(int V, vector<int> adj[]){
	    // Code here
	    
	    vector<int> ans; //to store the answer
	    vector<int> vis(V, 0); // to check if the node has been visited or not
	    queue<int> Q; //queue to maintain the breadth
	    Q.push(0); //pushing the first node to the Q
	    vis[0] = 1; // marking the node 0 as visited
	    while(!Q.empty()){
	        int curr = Q.front();
	        Q.pop();
	        ans.push_back(curr);
	        for(auto x: adj[curr]){
	            if(!vis[x]){
	                vis[x]=1;
	                Q.push(x);
	            }
	        }
	    }
	    return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    // 		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.bfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
