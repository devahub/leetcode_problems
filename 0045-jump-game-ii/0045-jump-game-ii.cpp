class Solution {
public:
    int solve(int i,vector<int>&nums,vector<int>&dp){
        if(i>=nums.size()-1){
            return 0;
        }
        
        if(dp[i]!=-1)
            return dp[i];
        
        int mini=INT_MAX;
        for(int j=1;j<=nums[i];j++)
        {
            int r=solve(j+i,nums,dp);
            if(r!=INT_MAX)    
                mini=min(r+1,mini);
        }
        
        return dp[i]=mini;
    }
    
    
    
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return solve(0,nums,dp);
    }
};