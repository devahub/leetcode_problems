class Solution {
public:
    
    // brute force---->
    
    long long subArrayRanges(vector<int>& nums) {
       
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            int mini=nums[i];
            int maxi=nums[i];
            
            for(int j=i;j<nums.size();j++){
                mini=min(mini,nums[j]);
                maxi=max(maxi,nums[j]);
                ans+=maxi-mini;
            }
        }    
    return ans;
    }
};