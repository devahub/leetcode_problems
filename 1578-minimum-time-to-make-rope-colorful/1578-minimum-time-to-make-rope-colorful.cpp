class Solution {
public:
    
   int minCost(string colors, vector<int>& neededTime) {
       vector<vector<int>> dp(colors.size(), vector<int> (27, -1));
        return solve(colors, neededTime, 0, 'a' + 26, dp);
    }
    
    
    int solve(string &colors, vector<int> &neededTime, int i, char prev, vector<vector<int>> &dp)
    {
        if(i >= colors.size())
            return 0;
        
        if(dp[i][prev - 'a'] != -1)
            return dp[i][prev - 'a'];
        
        int t = neededTime[i] + solve(colors, neededTime, i + 1, prev, dp);
        if(prev != colors[i])
            t = min(t, solve(colors, neededTime, i + 1, colors[i], dp));
        
        return dp[i][prev - 'a'] = t;
    }
};
    
    
