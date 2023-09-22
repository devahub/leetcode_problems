class Solution {
public:
    int majorityElement(vector<int>& nums) {
       map<int,int>mp;
        
        for(auto i:nums){
            mp[i]++;
        }
        int maxi=INT_MIN;
        for(auto i:mp){
            if(i.second>mp[maxi]){
                maxi=i.first;
            }
        }
        return maxi;
    }
};