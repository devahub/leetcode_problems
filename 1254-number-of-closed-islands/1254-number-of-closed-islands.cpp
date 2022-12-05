class Solution {
public:
    // we don't have to take boundry touching cases so we will make all boundary 0's to 1's
    // and remaining thing is same as no of islands
    
    void dfs(vector<vector<int>>& grid,int i,int j){
         if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j])
            return;
        
        grid[i][j]=1;
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    
    }

    
    
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int c=0;
        
        
        for(int i=0;i<n;i++){
            dfs(grid,i,0);                      // first and last column
            dfs(grid,i,m-1);
        }
        
        for(int j=0;j<m;j++){
            dfs(grid,0,j);                      // first and last row
            dfs(grid,n-1,j);
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=1){
                    dfs(grid,i,j);
                    c++;
                }
            }
        }
        return c;    
    }
};