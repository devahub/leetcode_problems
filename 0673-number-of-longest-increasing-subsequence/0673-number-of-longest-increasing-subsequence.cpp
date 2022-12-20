class Solution {
public:
    
   // vector dp stores length of lonegst inc subseq ending with nums[i]
   // vector cnt stores the number of subsequences of length dp[i]
    
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,1);
        vector<int>c(n,1);
        int maxl=1;
        int res=0;
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                 if(nums[i] > nums[j]){
                     if(dp[j]+1 > dp[i]){
                        dp[i] = dp[j]+1;
                        c[i] = c[j];
                    }
            
                    else if(dp[j]+1 == dp[i]){
                        c[i] += c[j];
                    }    
                }
            }
            maxl=max(maxl,dp[i]);
        }
        
        for(int i=0;i<dp.size();i++){
            if(dp[i] == maxl)
                res += c[i];
        }
        return res;  
    }
};