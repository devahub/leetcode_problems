class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,int>mp;
        
        for(auto i:nums){
            mp[i]++;
        }
        
        
        
        for(int i=0;;i++){
            if(mp[i]==0){
                return i;
            }
        }
        return -1;
    }
};