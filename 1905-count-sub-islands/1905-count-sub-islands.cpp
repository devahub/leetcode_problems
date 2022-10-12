class Solution
{
    public:
        bool flag=true;
    
        void dfs(int i, int j, int m, int n, vector<vector < int>> &grid1, vector< vector< int >> &grid2, vector< vector< int>> &vis)
        {

            if (i < 0 or i >= m or j < 0 or j >= n) return;
            if (vis[i][j] or grid2[i][j] == 0) return;

            if (grid1[i][j] == 0) 
                flag = false;

            vis[i][j] = 1;
            dfs(i - 1, j, m, n, grid1, grid2, vis);
            dfs(i + 1, j, m, n, grid1, grid2, vis);
            dfs(i, j - 1, m, n, grid1, grid2, vis);
            dfs(i, j + 1, m, n, grid1, grid2, vis);
        }

    int countSubIslands(vector<vector < int>> &grid1, vector< vector< int>> &grid2)
    {
       
        int c = 0;
        int m = grid1.size();
        int n = grid1[0].size();
        vector<vector < int>> vis(m, vector<int> (n, 0));

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid2[i][j] == 1)
                {
                    if (!vis[i][j])
                    {
                        flag = true;
                        dfs(i, j, m, n, grid1, grid2, vis);
                        if(flag==true)
                            c++;
                    }
                }
            }
        }
        return c;
    }
};