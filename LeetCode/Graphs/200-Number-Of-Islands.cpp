class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& vis, vector<vector<char>>& grid, int rows, int columns){
        if(i<0||j<0||i>=rows||j>=columns){ return; }
        if(grid[i][j] == '0'){ return; }
        if(!vis[i][j]){
            vis[i][j] = 1;
            dfs(i+1, j, vis, grid, rows, columns);
            dfs(i-1, j, vis, grid, rows, columns);
            dfs(i, j+1, vis, grid, rows, columns);
            dfs(i, j-1, vis, grid, rows, columns);
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int columns = grid[0].size();
        
        vector<vector<int>> vis(rows, vector<int>(columns, 0));
        int c = 0;
        
        for(int i=0; i<rows; ++i){
            for(int j=0; j<columns; ++j){
                if(!vis[i][j] && grid[i][j]=='1'){
                    dfs(i, j, vis, grid, rows, columns);
                    ++c;
                }
            }
        }
        
        return c;
    }
};
