class Solution
{
    public:

       	// greedy solution--------->

       	//     bool canJump(vector<int>& nums){
       	//         int n=nums.size();
       	//         int reach=0;

       	//         for(int i=0;i < n;i++){
       	//             if(i>reach){
       	//                 return false;
       	//             }
       	//             reach=max(reach,nums[i]+i);
       	//         }
       	//         return true;

       	//     }
       	// };

        bool solve(int i, vector<int> &nums, int cur)
        {

            if (cur < 0)
            {
                return false;
            }

            if (i == nums.size() - 1)
            {
                return true;
            }

            if (nums[i] > cur)
            {
                return solve(i + 1, nums, nums[i] - 1);
            }
            else
            {
                return solve(i + 1, nums, cur - 1);
            }
        }

    bool canJump(vector<int> &nums)
    {
        return solve(0, nums, nums[0]);
    }
};

//         greedy---->

//         int n=nums.size();
//         int last=n-1;
//         for(i = n-2; i >= 0; i--){
//             if(i+nums[i] >= last)
// 			           last = i;
//         }
//        return last==0;