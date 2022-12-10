class Solution {
public:
    
    
   void dfs(vector<vector<char>>& grid,int i,int j){
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size())
            return;                                              // boundary checking
       
        if(grid[i][j] == '2' || grid[i][j] == '0')
            return;                           // return if current position is of water or is                     `                                                   already visited
       
       grid[i][j] = '2';                            // mark the current as visited
       
        dfs(grid, i+1, j);
        dfs(grid, i, j-1);
        dfs(grid, i-1, j);
        dfs(grid, i, j+1);
   }
    
    
    
int numIslands(vector<vector<char>>& grid) {
        
    int c=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j);
                        c+=1;
                }
            }
        }
        return c;
    }
};