class Solution
{
    public:
       	//  vector<vector < int>> updateMatrix(vector<vector<int>>& mat) {
       	// brute force---->TLE

       	//         int m=mat.size();
       	//         int n=mat[0].size();
       	//         vector<vector<int>>dis(m,vector < int>(n,INT_MAX));

       	//         for(int i=0;i < m;i++){
       	//             for(int j=0;j < n;j++){
       	//                 if(mat[i][j]==0){
       	//                     dis[i][j]=0;
       	//                     }
       	//                 else{
       	//             for(int k=0;k < m;k++){
       	//                 for(int l=0;l < n;l++){
       	//                     if(mat[k][l]==0){
       	//                         int distance=abs(k-i)+abs(l-j);
       	//                         dis[i][j]=min(distance,dis[i][j]);

       	//                         }
       	//                     }
       	//                }            
       	//           }    
       	//       }
       	//   }
       	//         return dis;
       	//  }
       	// };

       	// optimal approach-----graph   bfs || visited array || queue of bfs

        public:

        bool isvalid(int row, int col, vector<vector < int>> &mat)
        {
            if (row < 0 or row >= mat.size() or col < 0 or col >= mat[0].size())
            {
                return false;
            }
            return true;
        }

    vector<vector < int>> updateMatrix(vector<vector < int>> &mat)
    {
        int m = mat.size();
        int n = mat[0].size();

        vector<vector < bool>> vis(m, vector<bool> (n, false));
        vector<vector < int>> ans(m, vector<int> (n, -1));
        queue<pair<pair<int, int>, int>> q;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] == 0)
                {
                    vis[i][j] = true;
                    q.push({{i,j},0 });
                }
                else
                {
                    mat[i][j] = 0;
                }
            }
        }
        while (!q.empty())
        {

            int row = q.front().first.first;
            int col = q.front().first.second;
            int steps = q.front().second;
            q.pop();
            ans[row][col] = steps;

            if (isvalid(row - 1, col, mat) == true and vis[row - 1][col] == false)
            {
                q.push({{row - 1, col},steps + 1 });
                vis[row - 1][col] = true;
            }
            if (isvalid(row + 1, col, mat) == true and vis[row + 1][col] == false)
            {
                q.push({{row + 1, col},steps + 1 });
                vis[row + 1][col] = true;
            }
            if (isvalid(row, col - 1, mat) == true and vis[row][col - 1] == false)
            {
                q.push({{row,col - 1},steps + 1 });
                vis[row][col - 1] = true;
            }
            if (isvalid(row, col + 1, mat) == true and vis[row][col + 1] == false)
            {
                q.push({{row,col + 1},steps + 1 });
                vis[row][col + 1] = true;
            }
        }
        return ans;
    }
};