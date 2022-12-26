class Solution
{
    public:

    // brute force solution ---->using recurssion only---->
    
//     int solve(int i,int j,vector<vector<int>>& mat){
        
// 		if(j<0 || j>=mat.size())
//             return 1e6;
// 		if(i==mat.size()-1)
//             return mat[i][j];
        
// 		int left = mat[i][j] + solve(i+1,j-1,mat); 
// 		int down = mat[i][j] + solve(i+1,j,mat);
// 		int right = mat[i][j] + solve(i+1,j+1,mat);
		
//         return min(down,min(left,right)); 
// 	}

// 	int minFallingPathSum(vector<vector<int>>& mat) {
// 		int n=mat.size();
// 		int ans=INT_MAX;
// 		for(int j=0;j<n;j++) 
//             ans=min(ans,solve(0,j,mat));
// 		return ans;
// 	}
// };
    
    
    
    
    
    
    
    
int solve(vector<vector < int>> &mat, int i, int j, int m, int n, vector< vector< int>> &dp)
        {
            if (j < 0 || j > n - 1)
                return 100000000;

            if (i == 0)                             // base case
                return mat[i][j];

            if (dp[i][j] != -1)
                return dp[i][j];

            int down = mat[i][j] +     solve(mat, i - 1, j, m, n, dp);
            int leftdiag = mat[i][j] + solve(mat, i - 1, j + 1, m, n, dp);
            int rightdiag = mat[i][j] + solve(mat, i - 1, j - 1, m, n, dp);

            return dp[i][j] = min(down, min(leftdiag, rightdiag));
        }

    int minFallingPathSum(vector<vector < int>> &mat)
    {
        int mini = INT_MAX;
        int m = mat.size();
        int n = mat[0].size();

        vector<vector < int>> dp(m + 1, vector<int> (n + 1, -1));
        
        for (int j = 0; j < n; j++)
        {
            mini = min(mini, solve(mat, m - 1, j, m, n, dp));
        }
        return mini;
    }
};