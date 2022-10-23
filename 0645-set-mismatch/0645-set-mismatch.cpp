class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>v;
        unordered_map<int,int>mp;
        for(auto i:nums)mp[i]++;
        
        for(auto i:mp){
            if(i.second>1)v.push_back(i.first);
        }
       
      
       for(int i=1;i<=nums.size();i++){
            
            if(mp.find(i)==mp.end()){
                
                v.push_back(i);
                
                break;
            }
        }
        return v;
    }
};