// Consider nums[] = [1, 3, 5, 4, 2].
// Traverse from back and find a breakpoint. Here, index breakPoint = 1 and nums[breakPoint] = 3
// Traverse from back and find a number larger than this. Here this number is: nums[i] = 4
// Swap nums[breakPoint] and nums[i]. Value after swapping: nums[] = [1, 4, 5, 3, 2].
// Reverse array from breakPoint + 1 to nums.size() i.e. these elements: [1, 4, 5, 3, 2]
// Final answer = [1, 4, 2, 3, 5].



class Solution {
public:
//     void nextPermutation(vector<int>& nums) {
//         int br=-1;
            
//         for(int i=nums.size()-1;i>0;i--){
//             if(nums[i]>nums[i-1]){
//                 br=i-1;
//                 break;
//              }
//         }
//         if(br<0){
//             reverse(nums.begin(),nums.end());
//         return ;
//         }
            
//         for(int i=nums.size()-1;i>0;i--){
//             if(nums[i]>nums[br]){
//                 swap(nums[i],nums[br]);
//                 reverse(nums.begin()+br+1,nums.end());
//                 break;
//             }
            
//         }
//     }
// };
    
     void nextPermutation(vector<int>& nums){
      next_permutation(nums.begin(),nums.end());
     }
};
    
    