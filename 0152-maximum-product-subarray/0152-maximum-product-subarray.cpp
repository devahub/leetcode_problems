class Solution
{
    public:
   
    // brute force--> giving Tle
    
//     int maxProduct(vector<int>& nums) {
//         int ans = nums[0];
//         int mul;
        
//         for(int i=0;i<nums.size();i++)
//         {
//             mul= nums[i];
//             ans = max(ans,mul);
//             for(int j= i+1;j<nums.size();j++)
//             {
//                 mul *= nums[j];
//                 ans= max(ans,mul);
//             }
//         }
//         return ans;
//     }
// };
    
    
    
    
       	// using kadanes's algo--->
       	// traverse from start 
       	// traverse from end
        // There are 2 possibilities - either the count of -ve numbers is even or odd.... --->>>
//     To understand this, lets take test case as [3,-1,4]. When we traverse from left to right, we will get ans as 3 whereas when we traverse from right to left, we will get ans as 4 which is the required ans
    
    
    
        int maxProduct(vector<int> &nums)
        {

            int maxi = INT_MIN;
            int p = 1;

            for (int i = 0; i < nums.size(); i++)
            {
                p *= nums[i];
                maxi = max(p, maxi);
                if (p == 0)
                    p = 1;
            }
            p = 1;
            for (int j = nums.size() - 1; j >= 0; j--)
            {
                p *= nums[j];
                maxi = max(p, maxi);
                if (p == 0)
                    p = 1;
            }
            return maxi;
        }
};




//  swapping aaproach-------->


// int maxProduct(vector<int>& nums) {
//         int max_so_far = nums[0];
//         int min_so_far = nums[0];
//         int max_product = nums[0];
//         int n = nums.size();
        
//         for(int i=1;i<n;i++){
//             if(nums[i]<0) 
//                {
//                     swap(max_so_far, min_so_far);

//                    }
//             max_so_far = max(nums[i], nums[i]*max_so_far);
//             min_so_far = min(nums[i], nums[i]*min_so_far);
//             
//             max_product = max(max_product, max_so_far);
//         }
//         return max_product;
//     }
// };
