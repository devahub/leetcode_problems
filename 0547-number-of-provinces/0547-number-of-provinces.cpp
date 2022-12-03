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

//         int v=isConnected.size();
//         vector<int> visited(v,0);
//         vector<int> adjList[v];

//         for(int i=0;i < v;i++)
//         {
//             for(int j=0;j < v;j++)
//             {
//                 if(isConnected[i][j]==1 and i!=j)
//                 {
//                     adjList[i].push_back(j);
//                     adjList[j].push_back(i);
//                 }
//             }
//         }
//         int count=0;
//         for(int i=0;i < v;i++)
//         {
//             if(!visited[i])
//             {
//                 count++;

//                 dfs(i,visited,adjList);
//             }
//         }

//         return count;
//     }

//  void dfs(int node,vector<int>& visited,vector<int> adjList[])
//     {
//         visited[node]=1;
//         for(auto it: adjList[node])
//         {
//             if(!visited[it])
//             {
//                 visited[it]=1;
//                 dfs(it,visited,adjList);
//             }
//         }
//     }

// };