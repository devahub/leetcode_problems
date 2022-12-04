class Solution {
public:
    
    // By drawing the recursion tree, we can see that for a target, we do the same calculations over and over again. This could be avoided by storing the number of combination obtained for a given target so that we don't waste time recalculating it at each recursion.
    
//     int solve(vector<int>& nums, int target,int i,int n,vector<int>&dp){
//         if(target < 0) 
//             return 0;
//         if(target == 0) 
//             return 1;
//         if(dp[target]!=-1)
//             return dp[target];
        
//         int ways=0;
//         for(int j=0;j<n;j++){
//             ways+=solve(nums,target-nums[j],j,n,dp);
                
//         }
//         return dp[target]= ways;
//     }

    
//     int combinationSum4(vector<int>& nums, int target) {
//         vector<int>dp(target+1,-1);
//         return solve(nums,target,0,nums.size(),dp);
        
    
//     }
// };
    
    
    
    
    
    // take, not take approach----->
    
     int solve(int i,int target,vector<int>& nums,vector<vector<int>>& dp) {
        if (target==0) return 1;
        if (i==nums.size()) 
            return 0;
        if (dp[i][target]!=-1) 
            return dp[i][target];
        int take=0;
        int not_take=solve(i+1,target,nums,dp);
        if(target>=nums[i]) 
            take=solve(0,target-nums[i],nums,dp);
         
        return dp[i][target]=take+not_take;
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<vector<int>> dp(nums.size()+1,vector<int>(target+1,-1));
        return solve(0,target,nums,dp);
    }
};