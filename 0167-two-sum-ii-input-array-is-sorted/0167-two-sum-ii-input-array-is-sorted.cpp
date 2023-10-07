class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        vector<int>v;
        
        while(l<h){
            if(nums[l]+nums[h]==target){
                v.push_back(l+1);
                v.push_back(h+1);
                return v;
            }
            
            else if(nums[l]+nums[h]<target){
                l++;
             }
            
            else{
                h--;
            }
        }
        return {};
    }
};