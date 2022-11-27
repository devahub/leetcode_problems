class Solution
{
    public:
    
       	//    vector<vector < int>> permute(vector<int>& nums) {
       	//        vector<vector < int>>v;
       	//         sort(nums.begin(),nums.end());

       	//         do{
       	//             v.push_back(nums);
       	//         }

       	//         while(next_permutation(nums.begin(),nums.end()));
       	//         return v;
       	//     }
       	// };

       	// 2nd appproach----->

        void solve(vector<int> &nums, int index, vector<vector< int>> &ans)
        {
            if (index == nums.size())
            {
                ans.push_back(nums);
                return;
            }

            for (int i = index; i < nums.size(); i++)
            {
                swap(nums[index], nums[i]);
                solve(nums, index + 1, ans);
                swap(nums[index], nums[i]);
            }
        }

    vector<vector < int>> permute(vector<int> &nums)
    {
        vector<vector<int>>ans;
        solve(nums, 0, ans);
        return ans;
    }
};