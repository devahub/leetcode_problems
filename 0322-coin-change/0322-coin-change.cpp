class Solution {
public:
    int solve(vector<int>& coins, int amount, int n,vector<vector<int>>&dp)
    {
        if(amount==0)
            return 0;
        
        if(n < 0 || amount < 0)
            return INT_MAX-1;
        
        
        if(dp[n][amount]!=-1)
            return dp[n][amount];
        
        int pick=1+solve(coins,amount-coins[n],n,dp);
        int npick=0+solve(coins,amount,n-1,dp);
        
        return dp[n][amount]=min(pick,npick);
    }
    
    
    
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int t=solve(coins,amount,n-1,dp);
        
        return (t<INT_MAX-1)?t:-1;
        
    }
};