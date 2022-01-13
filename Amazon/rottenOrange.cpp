/*
You are given an m x n grid where each cell can have one of three values:

0 representing an empty cell,
1 representing a fresh orange, or
2 representing a rotten orange.

Every minute, any fresh orange that is 4-directionally adjacent to a rotten orange becomes rotten.

Return the minimum number of minutes that must elapse until no cell has a fresh orange. 
If this is impossible, return -1.
*/

class Solution {
public:

    int orangesRotting(vector<vector<int>>& grid) {
        
        int n = grid.size(), m = grid[0].size();
        
        queue<pair<int,int>>q;
        
        int tym = 0; 

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(grid[i][j]==2) q.push({i,j});
                
            }
        }
        
        int cnt = q.size();
        
        while(!q.empty()){
            
            int x = 0;
            
            for(int i = 0 ; i < cnt ; i++) {
                
                pair<int,int>p = q.front();
                q.pop();
                int r = p.first, c = p.second;
                
                if(r>0 && grid[r-1][c]==1){
                    
                    grid[r-1][c] = 2;
                    q.push({r-1,c});
                    x++;
                }
                
                if(r<n-1 && grid[r+1][c]==1){
                    
                    grid[r+1][c] = 2;
                    q.push({r+1,c});
                    x++;
                }
                
                if(c>0 && grid[r][c-1]==1){
                    
                    grid[r][c-1] = 2;
                    q.push({r,c-1});
                    x++;
                }
                
                if(c<m-1 && grid[r][c+1]==1){
                    
                    grid[r][c+1] = 2;
                    q.push({r,c+1});
                    x++;
                }
            }
            
            if(x!=0) tym++;
            
            cnt = x;
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(grid[i][j]==1) return -1;
                
            }
        }
        
        return tym;
        
    }
};
