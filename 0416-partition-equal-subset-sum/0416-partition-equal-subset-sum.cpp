class Solution {
public:
    
    
    
    
     int solve(vector<int>& nums,int sum,int n,vector<vector<int>>&dp){
      
        if(n<=0)
            return false;
        
        if(sum==0)
            return true;
        
        if(dp[n-1][sum]!=-1)
            return dp[n-1][sum];
        
        if(nums[n-1]<=sum)              // pick or don't pick the number if less than sum
            {
            return dp[n-1][sum]=solve(nums,sum-nums[n-1],n-1,dp) || solve(nums,sum,n-1,dp);
            }
        
        else{                              // don't pick the number if greater than sum
            return dp[n-1][sum]=solve(nums,sum,n-1,dp); 
        }
        
    }
    
    
    
    
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(auto &i:nums){
            sum+=i;
        }
        
        if(sum%2!=0)   
            return false;
        
       
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        return solve(nums,sum/2,n,dp);
    }
};