/*
Given a grid of dimension nxm containing 0s and 1s. 
Find the unit area of the largest region of 1s.
Region of 1's is a group of 1's connected 
8-directionally (horizontally, vertically, diagonally).
*/ 

class Solution{
    public:
    
    // Helper Function
    int dfs(vector<vector<int>>&grid,vector<vector<bool>>&vis,int i,int j){
        
        int n = grid.size(), m = grid[0].size();
        
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]==0 || vis[i][j]) 
            return 0;
        
        vis[i][j] = true;
        
        int cnt = 0; 
        // dfs in all eight directions
        cnt+=dfs(grid,vis,i,j+1);
        cnt+=dfs(grid,vis,i,j-1);
        cnt+=dfs(grid,vis,i-1,j);
        cnt+=dfs(grid,vis,i+1,j);
        cnt+=dfs(grid,vis,i+1,j+1);
        cnt+=dfs(grid,vis,i-1,j-1);
        cnt+=dfs(grid,vis,i-1,j+1);
        cnt+=dfs(grid,vis,i+1,j-1);
        
        return cnt + 1;
    }
    
    // Main Function
    int findMaxArea(vector<vector<int>>& grid) {
        
        int n = grid.size(), m = grid[0].size();
        
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        int ans = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(grid[i][j]==0 || vis[i][j]) continue;
                
                ans = max(ans,dfs(grid,vis,i,j));
                
            }
        }
        
        return ans;
    }
    
};
