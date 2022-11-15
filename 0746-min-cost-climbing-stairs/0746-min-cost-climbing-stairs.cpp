class Solution {
public:
    
   int solve(vector<int> a,int i,vector<int>&dp){
      if(i<=1)    return dp[i] = a[i];
    
       if(dp[i]!=-1){
          return dp[i];
      }
       
       int pick=solve(a,i-1,dp);
       int npick=solve(a,i-2,dp);
       
       return dp[i]=a[i]+min(pick,npick);
   }
    
    
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n=cost.size();
        vector<int>dp(n+1,-1);
        return min(solve(cost,n-1,dp),solve(cost,n-2,dp));
        
        
    }
};
    
   
    
    
    
    
//   int minCostClimbingStairs(vector<int>& cost) {
//     int n = cost.size();
//     for(int i=2;i<n;i++){
//         cost[i]+= min(cost[i-1],cost[i-2]);
//         //In Question it says that it can take either 1 step or 2 step
//     }
//     return min(cost[n-1],cost[n-2]);
// }
// };