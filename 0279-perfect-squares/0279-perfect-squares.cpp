class Solution {
public:
    int solve(int n,vector<int>&dp){
        int c=INT_MAX;
        
        if(n==0){
           dp[0]=0;
            return 0;
           }
        
         if(dp[n]!=-1){
            return dp[n];
            }
        
        for(int i=1;i*i<=n;i++){
            int minp=solve(n-i*i,dp);
            c=min(c,minp);
        }
        
        dp[n]= c+=1;
        
        return c;
    }
    
    
    
    int numSquares(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};