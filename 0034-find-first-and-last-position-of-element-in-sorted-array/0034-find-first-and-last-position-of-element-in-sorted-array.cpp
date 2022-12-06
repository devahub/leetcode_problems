class Solution {
public:
      
    
    // using stl only---->lower and upper bound---->
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        
        auto low=lower_bound(nums.begin(),nums.end(),target);
        auto up=upper_bound(nums.begin(),nums.end(),target);
        
        if(low==nums.end() || *low!=target){
            return {-1,-1};
        }
 
        int l=low-nums.begin();
        int h=up-nums.begin()-1;
        return {l,h};
        
        
        
    }
};