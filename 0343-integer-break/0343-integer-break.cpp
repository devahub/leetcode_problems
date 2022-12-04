class Solution {
public:
    
    int solve(int i,int sum,vector<vector<int>>&dp)
    {
        if(i==1)
            return 1;
        if(dp[i][sum]!=-1){
            return dp[i][sum];
        }
        int npick=solve(i-1,sum,dp);
        int pick=0;
        
        if(sum>=i){
            pick=i*solve(i,sum-i,dp);
        }
        return dp[i][sum]=max(pick,npick);
    }
    
    
    int integerBreak(int n) {
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solve(n-1,n,dp);
    }
};