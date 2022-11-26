class Solution
{
    public:

        int solve(vector<vector < int>> &mat, int i, int j, int m, int n, vector< vector< int>> &dp)
        {
            if (j < 0 || j > n - 1)
                return 100000000;

            if (i == 0)
                return mat[i][j];

            if (dp[i][j] != -1)
                return dp[i][j];

            int down = mat[i][j] + solve(mat, i - 1, j, m, n, dp);
            int leftdiag = mat[i][j] + solve(mat, i - 1, j + 1, m, n, dp);
            int rightdiag = mat[i][j] + solve(mat, i - 1, j - 1, m, n, dp);

            return dp[i][j] = min(down, min(leftdiag, rightdiag));
        }

    int minFallingPathSum(vector<vector < int>> &mat)
    {
        int c = INT_MAX;
        int m = mat.size();
        int n = mat[0].size();

        vector<vector < int>> dp(m + 1, vector<int> (n + 1, -1));
        
        for (int j = 0; j < n; j++)
        {
            c = min(c, solve(mat, m - 1, j, m, n, dp));
        }
        return c;
    }
};