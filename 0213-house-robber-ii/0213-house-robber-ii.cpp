class Solution {
public:
    // since first and last element cannot be taken together, we can form two cases and ques will become same as house robber ques I. form two cases-- 
    // 1) take elements till last-1 and leave last one
    // 2) take elements from second to last and leave first    
    // and return the maximum between both 
    
    
    int solve(int i, int n, vector<int>&nums, vector<int>&dp){
        if(i >= n) 
            return 0;
        if(dp[i] != -1)
            return dp[i];
        
        int pick=nums[i] + solve(i+2,n,nums,dp);
        int npick=solve(i+1,n,nums,dp);
            
        return dp[i] = max(pick,npick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        
        vector<int>dp1(n+1,-1);
        vector<int>dp2(n+1,-1);
        
        int case1=solve(0,n-1,nums,dp1);
        int case2=solve(1,n,nums,dp2);
        
        return max(case1,case2);
    }
};

    
   