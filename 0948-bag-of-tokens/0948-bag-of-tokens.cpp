class Solution {
public:
    
    
    int dp[1005];
    int solve(int power, int score, vector<int>&token, int i, int l){
        int n= token.size();
        if(i> l)
            return score;
        
        int maxscore= 0;
        //use token
        if(dp[i]!=-1) return dp[i];
        
        if(token[i] <= power){
            maxscore= solve(power- token[i], score+1, token, i+1, l);
            return dp[i]= maxscore= max(score+1, maxscore);
        }
        
        if(score>=1){
            maxscore= solve(power+ token[l], score-1, token, i, l-1);
            return dp[i]= maxscore= max(score-1, maxscore);
        }
        
        //skip
        return dp[i]= solve(power, score, token, i+1, l);
        
    }
    
    
    
     int bagOfTokensScore(vector<int>& tokens, int power) {
        memset(dp, -1, sizeof(dp));
        int n= tokens.size();
        sort(tokens.begin(),tokens.end());
        
        return solve(power, 0, tokens, 0, n-1);     
     }
};