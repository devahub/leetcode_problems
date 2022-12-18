class Solution {
public:
    
    // brute force---->
    
//     int numberOfArithmeticSlices(vector<int>& nums) {
//         if(nums.size() < 3)
//             return 0;
        
//         int cnt = 0, diff;
        
//         for(int i = 0; i<nums.size()-2; ++i)
//         {
//             diff = nums[i+1] - nums[i];
			
//             for(int j = i+2; j<nums.size(); ++j)
//             {
			
//                 if(nums[j] - nums[j-1] == diff)
//                     ++cnt;
//                 else
//                     break;
//             }
//         }
//         return cnt;

//     }
// };
    
    
    
    
    
    
    
    // using previous diff pointers
    
     int numberOfArithmeticSlices(vector<int>& nums){
         if(nums.size() < 3)
            return 0;
         
         int c=0;
         int flag=0;
         int diff=0;
         int prev_diff = nums[1] - nums[0];
         
         
         for(int i=1;i<nums.size()-1;i++){
             int diff = nums[i+1] - nums[i];
             
             if(diff ==  prev_diff)
                flag++;
             
             else{
                 prev_diff=diff;
                 flag=0;
             }
             c+=flag;
         }
         return c; 
     }
};