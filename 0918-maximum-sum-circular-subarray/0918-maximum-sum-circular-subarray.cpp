class Solution
{
    public:

       	// brute force---->using modulo

       	//     int maxSubarraySumCircular(vector<int>& nums) {
       	
        //         int res=nums[0];   
       	//         for(int i=0;i < nums.size();i++) 
       	//         {
       	//             int curr_sum=nums[i];     
       	//             int max_sum=nums[i];

       	//             for(int j=1;j < nums.size();j++)
       	//             {
       	//                 int index=(i+j)%nums.size();
       	//                 curr_sum+=nums[index];
       	//                 max_sum=max(max_sum,curr_sum);
       	//             }
       	//              res=max(res,max_sum);
       	//         }

       	// 		return res;
       	//     }
       	// };

    
    
    
    
    
    
    
       	// using dp----->
       	//   we can have two cases----> circular cases or  continuous cases(can be found using kadanes)
       	// so we have to mainly focus on getting circular cases

       
       int kadane(vector<int>& nums) {
           
        int maxi = INT_MIN;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            maxi = max(sum, maxi);
            if(sum < 0) sum = 0;
        }
        return maxi;
    }
    
    // The negative of this answer will give us most minimum subarray sum of middle elements. Subtracting this value from totalSum will give us circular max subarray sum

    int maxSubarraySumCircular(vector<int> &nums)
        {
            if (nums.size() == 0)
            {
                return 0;
            }
        
            int x = kadane(nums);	// for normal continous max sum

            int y = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                y += nums[i];        // total sum
                nums[i] *= -1;       // reverse the signs and apply kadane & store in z
            }
        // max subarray sum= total sum of array-sum of non-contributing elements
            int z = kadane(nums);
        
            if (y + z == 0) 
                return x;

            return max(x, y + z);
        }
};