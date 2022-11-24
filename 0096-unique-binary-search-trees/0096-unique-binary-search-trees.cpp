class Solution {
public:
    
    
    // brute force--->tle usig recurssion
    
//     int numTrees(int n) {
//         if(n<=1)return 1;
        
//         int ans=0;
//         for(int i=1;i<=n;i++){
//             ans+=numTrees(i-1)*numTrees(n-i);
//         }
//         return ans;
//     }
// };
    
        int solve(int n,vector<int>&dp) {
        if(n<=1)return 1;
        
        if(dp[n]!=-1)return dp[n];
            
        int ans=0;
        for(int i=1;i<=n;i++){
            ans+=solve(i-1,dp)*solve(n-i,dp);
        }
        return dp[n]=ans;
    }
    
    int numTrees(int n){
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
    
    
};
    
    