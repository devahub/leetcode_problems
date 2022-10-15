class Solution
{
    public:
        int findKthLargest(vector<int> &nums, int k)
        {

           	// c++ stl---->

           	//         nth_element(nums.begin(), nums.end()-k, nums.end());
           	//         return nums[nums.size()-k];
           	//     }
           	// };

           	// heap soln

            sort(nums.begin(), nums.end(), greater<int> ());
            for (auto i: nums)
            {
                k--;

                if (k == 0)
                {
                    return i;
                }
            }
            return -1;
        }
};