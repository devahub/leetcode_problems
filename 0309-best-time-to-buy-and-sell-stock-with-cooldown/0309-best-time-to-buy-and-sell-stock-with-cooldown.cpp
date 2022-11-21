class Solution {
public:
    int solve(vector<int>& prices,int i,int hold,vector<vector<int>>&dp){
            
            if(i>=prices.size()){
                return 0;
            }
            if(dp[i][hold]!=-1){
                return dp[i][hold];
            }
            
        if(hold==1){
            int buy=-prices[i]+solve(prices,i+1,0,dp);
            int nbuy=solve(prices,i+1,1,dp);
             return dp[i][hold]=  max(buy,nbuy);
        }
        else{
            
            int sell=+prices[i]+solve(prices,i+2,1,dp);
            int nsell=solve(prices,i+1,0,dp);
            return dp[i][hold]=  max(sell,nsell);
        }
    }

    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return solve(prices,0,1,dp);
    }
};