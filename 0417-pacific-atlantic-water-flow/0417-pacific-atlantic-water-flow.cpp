class Solution
{
    public:
        vector<vector < int>> pacificAtlantic(vector<vector < int>> &mat)
        {
            int m = mat.size();
            int n = mat[0].size();

            vector<vector < int>> ans;
            vector<vector < bool>> atl(m,vector<bool>(n));
            vector<vector < bool>> pac(m,vector<bool>(n));
            

            
            for (int i = 0; i < m; i++)
            {                                   // we will already reach from pacific if we are connected to pacific boundary so for that cases we will already mark them with true

                dfs(mat, pac, i, 0);
                dfs(mat, atl, i, n - 1);
            }
            
            for (int j = 0; j < n; j++)
            {
                dfs(mat, pac, 0, j);
                dfs(mat, atl, m - 1, j);
            }
            
            
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(pac[i][j]==true && atl[i][j]==true){
                        ans.push_back({i,j});
                    }
                }
            }
            return ans;
        }
    
    
    
    void dfs(vector<vector < int>> &mat, vector< vector< bool >> &vis, int i, int j)
    {
        int m = mat.size();
        int n = mat[0].size();
        
        
        vis[i][j]=true;
        
        if (i-1 >= 0 && vis[i-1][j] != true && mat[i-1][j] >= mat[i][j])
            dfs(mat, vis, i-1, j);
        
        if (i+1 < m && vis[i+1][j] != true && mat[i+1][j] >= mat[i][j])
            dfs(mat, vis, i+1, j);
    
        if (j-1 >= 0 && vis[i][j-1] != true && mat[i][j-1] >= mat[i][j])
            dfs(mat, vis, i, j-1);
        
        if (j+1 < n && vis[i][j+1] != true && mat[i][j+1] >= mat[i][j])
            dfs(mat, vis, i, j+1);
        
        
    }
};