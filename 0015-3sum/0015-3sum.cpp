class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        
        
        for(int i=0;i<nums.size()-2;i++){
            if(i==0 || i>0 && nums[i]!=nums[i-1])
            {
            int low=i+1;
            int hi=nums.size()-1;
            int sum=0-nums[i];
            
            while(low<hi){
                if(nums[low]+nums[hi]==sum){
                    vector<int>v;
                    v.push_back(nums[i]);
                    v.push_back(nums[low]);
                    v.push_back(nums[hi]);
                    res.push_back(v);
      
                     while(low<hi && nums[low]==nums[low+1])
                        low++;
                     while(low<hi && nums[hi]==nums[hi-1])
                         hi--;
                low++;
                hi--;
                    }
            
                else if(nums[low]+nums[hi]<sum)
                    low++;
                else 
                {
                    hi--;
                }
            }
            }
        }
        
        
        return res;
    }
};