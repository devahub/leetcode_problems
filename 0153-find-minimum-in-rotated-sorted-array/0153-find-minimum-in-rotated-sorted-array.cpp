class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini=INT_MAX;
        
        for(auto i:nums){
            mini=min(mini,i);
        }
        return mini;
    }
};