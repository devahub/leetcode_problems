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
        vector<int> output(n);
        output[0] = 1;
        for(int i=1; i<n; i++){
            output[i] = output[i-1] * nums[i-1];
        }
        
        int right = 1;
        for(int i=n-1; i>=0; i--){
            output[i] *= right;
            right *= nums[i];
        }
        return output;
    }
};




 //    [1,2,3,4]
 
 //   1,1,2,6
 //   24,12,4,1

    
    