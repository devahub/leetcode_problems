class Solution {
public:
    
 
    // pattern finding------------->
    
//     int mod = 1000000007;
     
//     int numTilings(int n) {
         
//         vector<long long>dp(n+1);
//           dp[1] = 1; dp[0] = 1;
//         int MOD = 1000000007;
         
//          for(int i=2;i<=n;i++){
//              long long totalWays=0;
             
//              for(int j=1;j<=i;j++){
//                  int lw=i-j;
//                  long long ways=dp[lw];
//                  if(j>2){
//                      ways=(ways*2)%mod;
//                  }
//                   totalWays = (totalWays + ways) % mod;
//              }
//              dp[i]=totalWays;
//          }
//     return dp[n];
//      }
// };
    
    
    
    
    
    
    int mod = 1e9+7;
    long long int solve(vector<vector<long long int>> &dp, int n, bool isBothEmpty){
        // base cases
        if(n <= 1) return (isBothEmpty ? 1 : 0);
        if(n <= 2) return (isBothEmpty ? 2 : 1);
        if(dp[n][isBothEmpty] != -1) return dp[n][isBothEmpty];
        long long int ans = 0;
        if(isBothEmpty){
            // place one domino vertically
            ans += solve(dp,n-1,true);
            // place two domino horizontally
            ans += solve(dp,n-2,true);
            // place one tromino (2 ways)
            ans += 2*solve(dp,n-1,false);
        } else {
            // place one domino horizontally
            ans += solve(dp,n-1,false);
            // place one tromino 
            ans += solve(dp,n-2,true);
        }
        return dp[n][isBothEmpty] = ans%mod;
    }
    int numTilings(int n) {
        vector<vector<long long int>> dp(n+1, vector<long long int>(2,-1));
        return solve(dp, n, true);
    }
};