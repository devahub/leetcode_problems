class Solution {
public:
    
//    int fib(int n) {
//         if(n==0 || n==1) return n;
//         int prev2=0;
//         int prev=1;
       
//         for(int i=2;i<=n;i++){
//             int curr_i = prev2+prev;
//             prev2=prev;
//             prev=curr_i;
//         }
//         return prev;
//     }
// };
    
    
    
   int solve(int n, vector<int>&dp){
        if(n<=1) return n;
        if(dp[n] != -1)
            return dp[n];
        return dp[n] = solve(n-1,dp) + solve(n-2,dp);
    }
    
    
    int fib(int n) {
       vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};  