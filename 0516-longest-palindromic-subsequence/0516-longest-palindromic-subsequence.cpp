class Solution {
public:
    
    int solve(string &s,string &rev,int i,int j,vector<vector<int>>&dp){
        if(i>=s.length() || j>=s.length()) 
            return 0;
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        if(s[i]==rev[j]){
            dp[i][j]=1+solve(s,rev,i+1,j+1,dp);
        }
        else{
           dp[i][j]=max(solve(s,rev,i+1,j,dp),solve(s,rev,i,j+1,dp));
        }
        
        return dp[i][j];
    }
    
    
    int longestPalindromeSubseq(string s) {
        string rev=s;
        reverse(s.begin(),s.end());
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        
        int ans=solve(s,rev,0,0,dp);
        return ans;
    }
};