class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& vis, vector<vector<int>>& image, int newColor, int rows, int columns, int oldColor){
        if(i<0||j<0||i>=rows||j>=columns){ return;}
        if(vis[i][j]==1||image[i][j]!=oldColor){ return; }
        vis[i][j] = 1;
        image[i][j] = newColor;
        
        dfs(i+1, j, vis, image, newColor, rows, columns, oldColor);
        dfs(i-1, j, vis, image, newColor, rows, columns, oldColor);
        dfs(i, j+1, vis, image, newColor, rows, columns, oldColor);
        dfs(i, j-1, vis, image, newColor, rows, columns, oldColor);

    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int rows = image.size();
        int columns = image[0].size();
        vector<vector<int>> vis(rows, vector<int> (columns, 0));
        int oldColor = image[sr][sc];
        dfs(sr, sc, vis, image, newColor,rows, columns, oldColor);
        return image;
    }
};
