class Solution {
public:
    

// find prefix product and postfix product 
// and then multiply both vectors
    
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans(n);
//         vector<int> left(n);
//         vector<int> right(n);
        
//         left[0] = 1;
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

    

    
    // using division---->
    
    
     vector<int> productExceptSelf(vector<int>& nums) {
        int totalProduct = 1;
        int zeroCount = 0;
        int firstZeroIndex = -1;
         
        for(int i = 0; i<nums.size() ; i++){
            if( nums[i] == 0 ){
                zeroCount++;
                firstZeroIndex = i;
                if(zeroCount > 1){      // if zero more than 1 then all values will be 0
                    return vector(nums.size(), 0);
                }
            }else{
                totalProduct *= nums[i];
            }
        }
         
        for(int i = 0; i< nums.size() ; i++){
            if(zeroCount == 1){
                if(i == firstZeroIndex){
                    nums[i] = totalProduct;
                }else{
                    nums[i] = 0;
                }
            }else{
                nums[i] = totalProduct/nums[i];
            }
        }
        return nums;
    }
};



