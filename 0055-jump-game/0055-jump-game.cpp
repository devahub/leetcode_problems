class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int mr=0;
        
        
        for(int i=0;i<n;i++){
            if(i>mr){
                return false;
            }    
            
            mr=max(mr,i+nums[i]);
            

        }
        return true;
    }
};