class Solution {
public:
    
    
    void dfs(int i,int j,int m,int n,vector<vector<int>>& mat)
    {
        
    if(i<0||j<0||i>=m||j>=n||mat[i][j]!=1)
        return;
        
          
             mat[i][j]=0;
             dfs(i+1,j,m,n,mat);
             dfs(i-1,j,m,n,mat);
             dfs(i,j+1,m,n,mat);
             dfs(i,j-1,m,n,mat);
               
    }

    
     int numEnclaves(vector<vector<int>>& mat) {
        
        int m=mat.size();
        int n=mat[0].size();
        int ans=0;
        
        // change boundary touching 1's to 0's  first and then count number of 1's
        
         // for loops below will make all the boundary 1's and 1's attached to it as 0 and after that we will traverse and count the numbers of 1 left out in the matrix
         
        for(int i=0;i<m;i++)
            {                              
            dfs(i,0,m,n,mat);               
            dfs(i,n-1,m,n,mat);           
        }
        
        for(int j=0;j<n;j++)
            {   
            dfs(0,j,m,n,mat);
            dfs(m-1,j,m,n,mat);
        }
        
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){               
                if(mat[i][j]==1){
                    ans++;
                }
            }
        }
        return ans;
    }
};