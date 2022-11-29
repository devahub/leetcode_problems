class Solution {
public:
    
    int solve(vector<vector<char>> &v,int n,int m,int i,int j,vector<vector<int>>&dp)
    {
        
      if(i>=n || j>= m || v[i][j]=='0')return 0;
        if(dp[i][j]!=-1) return dp[i][j];
return dp[i][j]=1+min(solve(v,n,m,i+1,j,dp),min(solve(v,n,m,i+1,j+1,dp),solve(v,n,m,i,j+1,dp)));  
     }

    
    int maximalSquare(vector<vector<char>>& matrix) {
        
       int n=matrix.size();
        int m=matrix[0].size();
        int sum=0;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]=='1')
                {
                    int curr=solve(matrix,n,m,i,j,dp);
                    sum=max(sum,curr);
                }
            }
        }
        return sum*sum;   
    }
};