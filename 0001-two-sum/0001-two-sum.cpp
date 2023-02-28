class Solution {
public:
    
    
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(target-nums[i])!=mp.end())
            {
                v.push_back(mp[target-nums[i]]);
                v.push_back(i);
                return v;
            }
            else
                mp[nums[i]]=i;
        }
       return v;
    }
};