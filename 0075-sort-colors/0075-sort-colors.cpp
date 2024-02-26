class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;
        int i=0;
            
        while(i<=h){
            
            if(nums[i]==0){
                swap(nums[i],nums[l]);
                l++;
                i++;
            }
            
            else if(nums[i]==1){
                i++;
            }
            else {
                swap(nums[i],nums[h]);
                h--;
            }
             
        }
        
    
    } 
};