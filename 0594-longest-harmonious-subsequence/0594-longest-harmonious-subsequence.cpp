class Solution {
public:
    int findLHS(vector<int>& nums) {
        int res=0;
        
        unordered_map<int,int>mp;
        
        for(auto i:nums)mp[i]++;
        
       
        for(int i=0;i<nums.size();i++){
           if(mp.find(nums[i]+1)!=mp.end()){
                res=max(res,mp[nums[i]]+mp[nums[i]+1]);
           }
        
        }
        return res;
    }
};