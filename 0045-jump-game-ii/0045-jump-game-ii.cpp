class Solution {
public:
    
    
//   if we are on index i in nums array then we try to reach the last index on nums with no. of jumps allowed. If we are able to reach the last index we add one to our answer.
        
// If the last index i is not reachable from that index than we assign index i with INT_MAX in our dp table so as to disregard it in future calculations.
    
    
//     int solve(int i,vector<int>&nums,vector<int>&dp){
        
//         if(i>=nums.size()-1){
//             return 0;
//         }
        
//         if(dp[i]!=-1)
//             return dp[i];
        
//         int mini=INT_MAX;
        
//         for(int j=1;j<=nums[i];j++)
//         {
//             int r=solve(j+i,nums,dp);
//             if(r!=INT_MAX)    
//                 mini=min(r+1,mini);
//         }
        
//         return dp[i]=mini;
//     }

    
//     int jump(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>dp(n+1,-1);
//         return solve(0,nums,dp);
//     }
// };
    
    
    
    
    
    
    
    
    // greedy approach------->
    
    
      int jump(vector<int>& nums) {
          int max_reach=0;
          int curr_reach=0;
          int jumps=0;
        
        for(int i=0;i<nums.size()-1;i++){
            max_reach = max(max_reach, nums[i]+i);
            if(i==curr_reach) 
            {
                curr_reach = max_reach;
                jumps++;
            }
        }
        return jumps;
    }
};