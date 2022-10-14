class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int>mp;
        int n=nums.size();
        vector<int>v;
        
        for(auto i:nums){
            for(auto x:i){
                mp[x]++;
                if(mp[x]==n){
                    v.push_back(x);
                }
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};