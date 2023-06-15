class Solution {
public:
    
    
//     int tribonacci(int n) {
        
//         if(n==0){
//             return 0;
//         }
//         if(n==1)return 1;
        
//         if(n==2)return 1;
        
//          return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
//         }
// };
    
    
    
    int solve(int n,vector<int>&dp)
    {
        
    if(dp[n]!=-1){
        return dp[n];
    }    
        
    else if(n==0)
        return dp[0]=0;
    
    else if(n==1 || n==2)
        return dp[n]=1;
    
    else{
        return dp[n]=solve(n-1,dp)+solve(n-2,dp)+solve(n-3,dp);
    }
        
        
    }
    
    int tribonacci(int n){
        
        vector<int>dp(n+1,-1);
        return solve(n,dp);
        
    }
};