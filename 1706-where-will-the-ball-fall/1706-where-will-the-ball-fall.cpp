class Solution {
public:
    
    // there will be three cases--->
    
    int solve(vector<vector<int>>& grid,int i,int j,int n,int m){
        if(i>=n)
            return j;
 
        if(grid[i][j]==1){                      ///      / case
            if(j==m-1 || grid[i][j+1]==-1)
                return -1;
           
            if(grid[i][j+1]==1)
                return solve(grid,i+1,j+1,n,m);      
        }
        
        if(grid[i][j]==-1){                        ///       \ case
            if(j==0 || grid[i][j-1]==1)
                return -1;
            
            if(grid[i][j-1]==-1)
                return solve(grid,i+1,j-1,n,m);
        }

        return -1;
    }
    
    
    vector<int> findBall(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>v;
        
        
        for(int i=0;i<m;i++){
            int t=solve(grid,0,i,n,m);
            v.push_back(t);
      }
        return v;
        
    }
};
    
    