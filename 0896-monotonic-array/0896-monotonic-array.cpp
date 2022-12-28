class Solution {
public:
//     bool isMonotonic(vector<int>& nums) {
//         int inc=1;
//         int dec=1;
//         int n=nums.size();
        
//         for(int i=0;i<n-1;i++){
//             if(nums[i]<=nums[i+1]){
//                 inc++;
//             }
//             if(nums[i]>=nums[i+1]){
//                 dec++;
//             }
//         }
        
//         if(inc==n || dec==n){
//             return true;
//         }
//         return false;
//     }
// };
    
    
    
    
   bool isMonotonic(vector<int>& nums) {
        bool monoInc=true, monoDec=true;
		
		//checking for monotonically increasing
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]> nums[i]){
                monoInc=false;
            }
        }
		
		//check for monotonically decreasing
        for(int i=1; i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                monoDec=false;
            }
        }
        return monoInc or monoDec;
    }
};