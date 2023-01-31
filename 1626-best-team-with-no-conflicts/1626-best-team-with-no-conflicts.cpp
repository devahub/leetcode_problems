class Solution {
public:
    
    int solve(vector<vector<int>>&v,int i,int mx,vector<vector<int>> &dp)
    {
        
        if(i>=v.size()){
            return 0;
        }
        
        if(dp[i][mx]!=-1){
            return dp[i][mx];
        }
        
        if(v[i][1]>=mx){
            return dp[i][mx]=max(v[i][0]+solve(v,i+1,v[i][1],dp),solve(v,i+1,mx,dp));
        }
         else  
          return dp[i][mx]=solve(v,i+1,mx,dp); 
        
    }
    
    
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
       vector<vector<int>>v;
       
        for(int i=0;i<ages.size();i++){
            v.push_back({scores[i],ages[i]});
        }
        sort(v.begin(),v.end());
        
        vector<vector<int>>dp(1005,vector<int>(1005,-1));
        return solve(v,0,0,dp);
    }
};