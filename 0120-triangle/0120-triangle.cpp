class Solution {
public:
    
    int solve(vector<vector<int>>& triangle,int i,int j,int n,vector<vector<int>>&dp){
        if(i==n-1)
            return triangle[i][j];
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        int lower_left=triangle[i][j]+solve(triangle,i+1,j,n,dp);
        int lower_right=triangle[i][j]+solve(triangle,i+1,j+1,n,dp);
        
        return dp[i][j]=min(lower_left,lower_right);
     }
    
    
    
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solve(triangle,0,0,n,dp);
    }
};