class Solution {
public:
    
 
    // brute force
    
//     int findPeakElement(vector<int>& nums) {
//         int n = nums.size();
//         if(n == 1) 
//             return 0;
//         if(n == 2)
//             return nums[0] > nums[1] ? 0 : 1;
        
        
//         for(int i=1;i<n-1;i++){
//             if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
//                 return i;
//             }
//         }
        
//         if(nums[0] > nums[1])                    //  important lines!!!!!
//             return 0;
//         else if(nums[n-1] > nums[n-2]) 
//             return n-1;
//         return -1;
//     }
// };
    
    
    
  // using binary search----->  
    
     int findPeakElement(vector<int>& nums){
         int n = nums.size();
         if(n == 1) 
             return 0;
         if(n == 2)
             return nums[0] > nums[1] ? 0 : 1;
         int l=1;
         int h=nums.size()-2;
         
         
         while(l<=h){
             int mid=l+(h-l)/2;
             
                if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) 
                    return mid;
                else if(nums[mid+1] > nums[mid]) 
                    l = mid+1;
                else if(nums[mid-1] >= nums[mid]) 
                    h = mid-1;
             
        }
         
        if(nums[0] > nums[1])               // important lines !!!!!
            return 0;
        else if(nums[n-1] > nums[n-2]) 
            return n-1;
        return -1;   
     }
};
    