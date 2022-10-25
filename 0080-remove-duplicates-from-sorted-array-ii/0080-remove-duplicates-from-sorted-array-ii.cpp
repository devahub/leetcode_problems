class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       if(nums.size()<=2){
            return nums.size();
        }
        
       for(int i=0;i<nums.size()-2;i++){
           if(nums[i]==nums[i+1] && nums[i+1]==nums[i+2]){
               nums.erase(nums.begin()+i);
               i--;
           }
       }
        return nums.size();
    }
};