class Solution {
public:

        // very optimised solution----->
        
// class Solution {
// public:
//     int rob(vector<int>& nums) {
    
//         if (nums.size() == 0) return nums[0];
//         int rob1 = 0;
//         int rob2 = nums[0];
    
//         for (int i = 1; i<nums.size(); i++) {
//             int rob = max(nums[i]+rob1, rob2);
//             rob1=rob2;
//             rob2=rob;
//         }
//         return rob2;
//     }
// };


    
    int solve(vector<int>& nums,vector<int>&dp,int i){
        if(nums.size()<=i)
            return 0;
        
        if(dp[i]!=-1)return dp[i];
        
        int pick=nums[i]+solve(nums,dp,i+2);
        int npick=solve(nums,dp,i+1);
        
        return dp[i]=max(pick,npick);
        
    }

 int rob(vector<int>& nums){
     int n=nums.size();
     vector<int>dp(n+1,-1);
     return solve(nums,dp,0);
     
     
 }
};