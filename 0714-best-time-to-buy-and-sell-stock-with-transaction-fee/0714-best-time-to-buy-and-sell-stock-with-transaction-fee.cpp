class Solution {
public:
    int n;
   int solve(vector<int> &prices, int idx, int bag, int fee, vector<vector<int>> &dp){
        if(idx >= n) return 0;
        if(dp[idx][bag] != -1) return dp[idx][bag];
       
        if(bag == 1){
            int sell = (prices[idx] - fee) + solve(prices, idx + 1, 0, fee, dp);
            int nsell = solve(prices, idx + 1, 1, fee, dp);
            return dp[idx][bag] = max(sell, nsell);
        }
       else{
            int buy = -prices[idx] + solve(prices, idx + 1, 1, fee, dp);
            int nbuy = solve(prices, idx + 1, 0, fee, dp);
            return dp[idx][bag] = max(buy, nbuy);
        }
    }
public:
    int maxProfit(vector<int>& prices, int fee) {
        n = prices.size();
        vector<vector<int>> dp(n + 1, vector<int>(2, -1));
        return solve(prices, 0, 0, fee, dp);
    }
};
