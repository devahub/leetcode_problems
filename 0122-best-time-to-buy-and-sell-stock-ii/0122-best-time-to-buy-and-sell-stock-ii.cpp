class Solution {
public:
    
    // using recurssion--->
    
//     int solve(vector<int>& prices,int i,int buy){
//             if(i==prices.size()){
//                 return 0;
//             }
//         if(buy){
//             int buy=-prices[i]+solve(prices,i+1,0);
//             int nbuy=solve(prices,i+1,1);
//             return max(buy,nbuy);
//         }
//         else{
            
//             int sell=+prices[i]+solve(prices,i+1,1);
//             int nsell=solve(prices,i+1,0);
//             return max(sell,nsell);
//         }
//     }

//     int maxProfit(vector<int>& prices) {
//         return solve(prices,0,1);
//     }
// };
    
    
    
    /// dp --->changing parameters are index and buy
    
        int solve(vector<int>& prices,int i,int buy,vector<vector<int>>&dp){
            int pro1=INT_MIN;
            int pro2=INT_MIN;
            if(i==prices.size()){
                return 0;
            }
            if(dp[i][buy]!=-1){
                return dp[i][buy];
            }
            
        if(buy==1){
            int buy=-prices[i]+solve(prices,i+1,0,dp);
            int nbuy=solve(prices,i+1,1,dp);
             pro1=max(buy,nbuy);
        }
        else{
            
            int sell=+prices[i]+solve(prices,i+1,1,dp);
            int nsell=solve(prices,i+1,0,dp);
            pro2= max(sell,nsell);
        }
            
           return dp[i][buy]=max(pro1,pro2); 
    }

    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return solve(prices,0,1,dp);
    }
};