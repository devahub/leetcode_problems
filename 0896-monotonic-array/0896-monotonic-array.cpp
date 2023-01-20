class Solution {
public:
    
    bool isMonotonic(vector<int>& nums) {
        int inc=1;
        int dec=1;
        int n=nums.size();
        
        for(int i=0;i<n-1;i++){
            if(nums[i]<=nums[i+1]){
                inc++;
            }
            if(nums[i]>=nums[i+1]){
                dec++;
            }
        }
        
        if(inc==n || dec==n){
            return true;
        }
        return false;
    }
};
    
    
    
    
//    bool isMonotonic(vector<int>& nums) {
//         if (nums.size()<=2) 
//             return true;

//         bool is_increasing= 1;
//         if (nums[0] > nums.back())
//             is_increasing=0;
       
//         for (int i=0; i<nums.size()-1; i++){
//             if (is_increasing){
//                 if (nums[i]>nums[i+1])
//                     return false;
//             }
//             else{
//                 if (nums[i]<nums[i+1])
//                     return false;
//             }
//         }
//         return true;
//     }
// };