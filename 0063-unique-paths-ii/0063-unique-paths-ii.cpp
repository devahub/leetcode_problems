class Solution {
public:
    
    int solve(int i,int j,vector<vector<int>>& mat,int m,int n,vector<vector<int>>&dp){
        
        if(i>=m || j>=n )
            return 0;
        
        if(mat[i][j]==1) // extra condition for obstacles in path-->don't count that path 
            return 0;
        
        if(i==m-1 && j==n-1){
            return 1;
        }
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        int down=solve(i+1,j,mat,m,n,dp);
        int right=solve(i,j+1,mat,m,n,dp);
        return dp[i][j]=down+right;
     }
    
    int uniquePathsWithObstacles(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return solve(0,0,mat,m,n,dp);
    
    }
};