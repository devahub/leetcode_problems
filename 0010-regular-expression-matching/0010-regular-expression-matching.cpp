class Solution {
public:
    
    bool solve(string s, string p, int i, int j,vector<vector<int>> &dp){
        if(j==p.size())
            return i==s.size();
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        bool first_match=(i<s.size() && (s[i]==p[j] || p[j]=='.' ));
        
        bool ans=0;
        if(j+1<p.size() && p[j+1]=='*')
        {
            ans= (solve(s,p,i,j+2,dp)|| (first_match && solve(s,p,i+1,j,dp) ));
        }
        else
        {
            ans= (first_match && solve(s,p,i+1,j+1,dp));
        }
        dp[i][j]=ans;
        return ans;
    }
    
    
    
    bool isMatch(string s, string p) {
        vector<vector<int>> dp(s.size()+1,vector<int>(p.size(),-1));
        return solve(s,p,0,0,dp);    
    }
};