class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
          map<int,int>mp;
        
        for(auto i:nums){
            mp[i]++;
        }
        
        for(auto j:mp){
            if(j.second>1)
                return true;
        }
        return false;
    }
};