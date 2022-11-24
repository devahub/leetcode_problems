class Solution {
public:
    // we ahve to make sure that all 0 must be covered in the process
    int res=0;
    int zero=1;
    
    void dfs(vector<vector<int>>& grid,int x,int y,int count){
    
        if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size() || grid[x][y] == -1) 
            return;
        
        if (grid[x][y] == 2) {
            if(zero == count)
                res++; 
            return;
        }
        
        grid[x][y]=-1;
        
        dfs(grid,x+1,y,count+1);                // traverse in all 4 directions------->
        dfs(grid,x-1,y,count+1);
        dfs(grid,x,y+1,count+1);
        dfs(grid,x,y-1,count+1);
        
        grid[x][y] = 0;
    }
    
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        
        int stx=0;
        int sty=0;
       
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    stx=i;    // if it is an starting value
                    sty=j;
                }
                else if(grid[i][j]==0){
                    zero++;
                }
                
            }
        }
        dfs(grid,stx,sty,0);
        return res;
    }
};