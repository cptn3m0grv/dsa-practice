// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
public:
    bool solve(int src, vector<int> &vis, vector<int> &order, vector<int> adj[]){
        vis[src]=1;
        order[src]=1;
        for(auto x: adj[src]){
            if(!vis[x]){
                if(solve(x, vis, order, adj)){
                    return true;
                }
            }else if(order[x]){
                return true;
            }
        }
        
        order[src]=0;
        return false;
    }

	bool isCyclic(int V, vector<int> adj[]) {
	   	// code here
	   	vector<int> vis(V, 0);
	   	vector<int> order(V, 0);
	   	for(int i=0;i<V;++i){
	   	    if(solve(i, vis, order, adj)){
	   	        return true;
	   	    }
	   	}
	   	
	   	return false;
	}
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends
