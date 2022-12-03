class Solution {
public:
    
    
    int solve(vector<int>& wt, int sum, int n,  vector<vector<int>>& dp){
        if(sum == 0) 
            return 1;
        if(n <= 0) 
            return 0;
        
        
        if(dp[n][sum] != -1) 
            return dp[n][sum];
        
        if(wt[n-1] <= sum){
            dp[n][sum] = solve(wt, sum-wt[n-1], n, dp) + solve(wt, sum, n-1, dp);
            return dp[n][sum];
        }else{
            dp[n][sum] = solve(wt, sum, n-1, dp);
            return dp[n][sum];
        }
    }
    
    
    int change(int amount, vector<int>& coins) {
        if(amount == 0) 
            return 1;
        if(coins.size() == 0) 
            return 0;
        int n= coins.size();
        vector<vector<int>>dp(n+1, vector<int>(amount+1, -1));
        return solve(coins, amount, n, dp);
    }
};