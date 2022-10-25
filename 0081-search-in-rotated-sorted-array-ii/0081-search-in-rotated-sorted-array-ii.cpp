class Solution {
public:
    
    // brute force--->
//     bool search(vector<int>& nums, int target) {
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==target)return true;
//         }
//         return false;
//     }
// };
    
    
    // using binary search----->
    
     bool search(vector<int>& nums, int target) {
          int l=0;
        int h=nums.size()-1;
            
         while(l<=h){
                int mid=l+(h-l)/2;
                if(target==nums[mid]){
                    return true;
                }
              if((nums[l] == nums[mid]) && (nums[h] == nums[mid]))
                    {
                l++;
                h--;
                    }
             
                else if(nums[mid]>=nums[l]){
                    if(nums[l]<=target && target<nums[mid])
                        h=mid-1;
                    else
                        l=mid+1;
                }
                else {
                    if(nums[mid]<target && target<=nums[h])
                        l=mid+1;
                    else
                        h=mid-1;
                }   
         }
        
        return false;
        
         
         
     }
};