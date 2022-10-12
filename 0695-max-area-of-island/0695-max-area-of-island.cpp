class Solution {
public:
       
        // 1st approach------>dfs
    
    int dfs(vector<vector<int>>&grid, int i,int j, int m,int n){        
        if(i<n and j<m and i>=0 and j>=0 and grid[i][j]==1){
            grid[i][j]=0;
            return 1+    dfs(grid,i+1,j,m,n)+
                         dfs(grid,i,j+1,m,n)+
                         dfs(grid,i-1,j,m,n)+
                         dfs(grid,i,j-1,m,n);     
    
        }
        return 0;
    }

    
   int maxAreaOfIsland(vector<vector<int>>& grid) {
        int c;
        int maxi=0;
        int n=grid.size();
        int m=grid[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                c=dfs(grid,i,j,m,n);
                maxi=max(maxi,c);
                }
            }
        }
        return maxi;
    }
};
            
  