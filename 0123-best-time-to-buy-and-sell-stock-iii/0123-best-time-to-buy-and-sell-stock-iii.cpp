class Solution {
public:
            int solve(vector<int>& prices,int i,int buy,vector<vector<vector<int>>>&dp,int k){
            int pro1=INT_MIN,pro2=INT_MIN;
            if(i==prices.size() || k==0){
                return 0;
            }
            if(dp[i][buy][k]!=-1){
                return dp[i][buy][k];
            }
        if(buy){
            int buy=-prices[i]+solve(prices,i+1,0,dp,k);
            int nbuy=solve(prices,i+1,1,dp,k);
             pro1=max(buy,nbuy);
        }
        else{
            
            int sell=+prices[i]+solve(prices,i+1,1,dp,k-1);
            int nsell=solve(prices,i+1,0,dp,k);
            pro2= max(sell,nsell);
        }
            
           return dp[i][buy][k]=max(pro1,pro2); 
    }

    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        return solve(prices,0,1,dp,2);
    }
};