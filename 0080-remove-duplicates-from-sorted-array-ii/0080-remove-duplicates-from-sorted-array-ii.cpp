class Solution {
public:
    
    
    int removeDuplicates(vector<int>& nums) {
        
        if (nums.size() <= 2) 
            return nums.size();
        
        
        int c=1;
        int j=1;
        
         for(int i = 1; i < nums.size(); i++){
             if(nums[i-1]==nums[i]){
                 c++;
             }
             else{
                 c=1;
                 
             }
             
             if (c <= 2)
                {
                    nums[j++] = nums[i];
                }
         }
       return j; 
        
    }
};

