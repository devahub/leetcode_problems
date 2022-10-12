class Solution
{
    public:
        int solve(vector<int> &nums, int target, int i, vector<vector< int>> &dp)
        {
            if (i == nums.size() && target == 0)
            {
                return 1;
            }

            if (i >= nums.size())
                return 0;

            if (dp[i][target + 2000] != -1)
            {
                return dp[i][target + 2000];
            }
            
            return dp[i][target + 2000] = solve(nums, target - nums[i], i + 1, dp) +                            solve(nums, target + nums[i], i + 1, dp);
        }


    int findTargetSumWays(vector<int> &nums, int target)
    {
        int n = nums.size();
        vector<vector < int>> dp(n, vector<int> (4001, -1));
        return solve(nums, target, 0, dp);
    }
};