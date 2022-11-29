class Solution {
public:

    
     
    int solve(vector<vector<int>>& mat,int m, int n,int i,int j,vector<vector<int>>&dp){
        
        
        if(i==m-1 && j==n-1)
             return mat[i][j];
         if(i>=m || j>=n){
             return 1000000;            // random big number
         }   
        
        if(dp[i][j]!=-1)
             return dp[i][j];
        
        
        int down= mat[i][j]+solve(mat,m,n,i+1,j,dp);
        int right= mat[i][j]+solve(mat,m,n,i,j+1,dp);
        
       return dp[i][j]=min(down,right);
     }
    
    int minPathSum(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return solve(mat,m,n,0,0,dp);
        
     }
};
    
    
    