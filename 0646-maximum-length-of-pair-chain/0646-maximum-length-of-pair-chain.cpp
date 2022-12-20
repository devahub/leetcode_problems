class Solution {
public:
    
    int solve(int cur,int prev,vector<vector<int>>& pairs,int n,vector<vector<int>>&dp)
    {
        if(cur==n){
            return 0;
        }
        
        if(dp[cur][prev+1]!=-1){
            return dp[cur][prev+1];
        }
        
        int npick=solve(cur+1,prev,pairs,n,dp);
        
        int pick=0;
        if(prev==-1 || pairs[prev][1]<pairs[cur][0]){
            pick=1+solve(cur+1,cur,pairs,n,dp);
        }
        
        return dp[cur][prev+1]=max(pick,npick);
    }
    
    
    int findLongestChain(vector<vector<int>>& pairs) {
        int n=pairs.size();
        sort(pairs.begin(),pairs.end());
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        return solve(0,-1,pairs,n,dp);
    }
};