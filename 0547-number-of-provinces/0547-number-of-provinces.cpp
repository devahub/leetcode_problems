class Solution
{
    public:

    
        void dfs(vector<vector < int>> &mat, int i, vector< bool > &vis)
        {
            vis[i] = true;
            for (int j = 0; j < mat.size(); j++)
            {
                if (!vis[j] && mat[i][j] == 1)
                {
                    dfs(mat, j, vis);
                }
            }
        }
    

    
int findCircleNum(vector<vector < int>> &mat)
{

    int n = mat.size();
    int c = 0;

    vector<bool> vis(n, false);

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(mat, i, vis);
            c++;
            
        }
    }
    return c;
  }
};
