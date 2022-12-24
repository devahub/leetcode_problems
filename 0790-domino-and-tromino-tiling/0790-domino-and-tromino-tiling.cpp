class Solution {
public:
    
 
    // pattern finding------------->
    
    int mod = 1000000007;
     
    int numTilings(int n) {
         
        vector<long long>dp(n+1);
          dp[1] = 1; dp[0] = 1;
        int MOD = 1000000007;
         
         for(int i=2;i<=n;i++){
             long long totalWays=0;
             
             for(int j=1;j<=i;j++){
                 int lw=i-j;
                 long long ways=dp[lw];
                 if(j>2){
                     ways=(ways*2)%mod;
                 }
                  totalWays = (totalWays + ways) % mod;
             }
             dp[i]=totalWays;
         }
    return dp[n];
     }
};
    
    
    
    
    
    
    
    
//     int solve(int n, vector<vector<long long>>&dp,bool emp){
        
        
        
//     }
    
    
//     int numTilings(int n) {
//        vector<vector<long long>>dp(n,vector<int>(2,-1));
//         return solve(n,dp,true);   
//     }
// };