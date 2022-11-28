class Solution
{
    public:

       	// brute force---->

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
       	// so we have to focus on getting circular cases

       
    
    
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
                y += nums[i];
                nums[i] *= -1;
            }

            int z = kadane(nums);
            if (y + z == 0) return x;

            return max(x, y + z);
        }
};