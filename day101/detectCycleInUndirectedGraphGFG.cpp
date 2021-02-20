class Solution {
public:
    bool solve(int src, int par, vector<int> &vis, vector<int> adj[]){
        vis[src]=1;
        for(auto x: adj[src]){
            if(!vis[x]){
                if(solve(x, src, vis, adj)){
                    return true;
                }
            }else if(x!=par){
                return true;
            }
        }
        return false;
    }

	bool isCycle(int V, vector<int>adj[]){
	    // Code here
	    vector<int> vis(V, 0);
	    for(int i=0; i<V; ++i){
	        if(!vis[i]){
    	        if(solve(i, -1, vis, adj)){
    	            return true;
    	        }
	        }
	    }
	    return false;
	}
};
