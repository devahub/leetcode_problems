class Solution {
public:
    
    
    
    
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>ans(n);
//         vector<int>left(n);
//         vector<int>right(n);
        
//           left[0] = 1;
//         for(int i = 1; i < nums.size(); i++){
//             left[i] = left[i - 1] * nums[i - 1];
//         }
        
//         right[n - 1] = 1;
//         for (int j = n - 2; j >= 0; j--) {
//             right[j] = right[j + 1] * nums[j + 1];
//         }
        
//         for (int k = 0; k < n; k++) {
//             ans[k]= left[k] * right[k];
//         }
       
//         return ans;
//     }
// };

    
   ///  using dp  
    
    vector<int> productExceptSelf(vector<int>& nums) {
         int n = nums.size();
        vector<int> output(n, 1);

        int left_prod = 1;
        for(int i = 1; i < n; i++) {
            left_prod *= nums[i-1];
            output[i] *= left_prod;
        }

        int right_prod = 1;
        for(int i = n-2; i >= 0; i--) {
            right_prod *= nums[i+1];
            output[i] *= right_prod;
        }

        return output;
    }
};




 //    [1,2,3,4]  output    [1,]    [1*1  1*1 1*2  2*3]  
 
 //  [1,1,1,1]
//   [1 1 2 6] 
//   [6,2,1,1]
//   [4,3,2,1]
 //   24,12,8,6

    
    