class Solution
{
    public:
    
    //  approach 1--->
    
    
       	//     1st step : I will visit the island which comes first in graph i.e. finding first '1' in the graph.
       	// 2nd step : I will add the first 1's cordinates to queue and mark it visited (by changing 1 to 2 instead of another visited 2D array, so it saves us space).
       	// 3rd step : I will travel through all its neighbours and make the neighbour visited if it comes under same island. And while marking them visited, I will add them to queue also.
       	// 4th step : Now I will run BFS on the first island and find the nearest bridge to connect nearest '1'.

//         queue<pair<int, int>> q; 
    
//     void dfs(vector<vector<int>>& grid, int i, int j) { 
        
//         if (i<0 or i>=grid.size() or j<0 or j>=grid[0].size() or grid[i][j] == 2 or grid[i][j] == 0)
//             return;
        
//         grid[i][j] = 2; 
//         q.push({i,j}); 
        
//         dfs(grid, i+1, j);
//         dfs(grid, i-1, j);
//         dfs(grid, i, j+1);
//         dfs(grid, i, j-1);
//     }
    
//     int bfs(vector<vector<int>>& grid){ 
        
//         int d = 0; 
//         int mindist = INT_MAX;
        
//         vector<vector<int>> dir = {{1,0}, {0,1}, {-1,0}, {0,-1}};
        
//         while (!q.empty()){
//             int n = q.size();
            
//             while(n-- > 0){
//                 auto a = q.front();
//                 q.pop();

//                 for (int h=0; h<4; h++) {
//                     int x = dir[h][0] + a.first;
//                     int y = dir[h][1] + a.second;
                    
//                     if (x>=0 and x<grid.size() and y>=0 and y<grid[0].size() and grid[x][y] == 1) { 
//                         mindist = min(mindist, d);
//                     }

//                     else if (x>=0 and x<grid.size() and y>=0 and y<grid[0].size() and grid[x][y] == 0) { 
//                         q.push({x, y});
//                         grid[x][y] = 2;
//                     }
//                 }
//             }
//             d++; 
//         }
        
//         return mindist; 
//     }
    
//     int shortestBridge(vector<vector<int>>& grid) {
        
//         bool flag = false;
        
//         for (int i=0; i<grid.size(); i++){
//             for (int j=0; j<grid[0].size(); j++){
//                 if (grid[i][j] == 1 and !flag){ 
//                     dfs(grid, i, j); 
//                     q.push({i,j});
//                     flag = true;
//                     break;
//                 }
//             }
//             if (flag)
//                 break;
//         }
        
//         return bfs(grid); 
//     }
// };


// approach----2>>>>>


// Perform DFS for both islands and store their coordinates in seperate sets. now we know distance between 2 points is |x1-x2| + |y1-y2|
// so iterate over those 2 sets and find minimum distance between points of island 1 and 2. subtract 1 as we included the island coordinate too in distance and return the answer.

// class Solution {
// public:
    void dfs(vector<vector<int>> &g,set<pair<int,int>> &is,int i,int j)
    {
         
        if(i<0||j<0||i>=g.size()||j>=g[0].size()||g[i][j]!=1||is.count({i,j}))
            return;
        
        is.insert({i,j});
        g[i][j]=2;
        dfs(g,is,i+1,j);
        dfs(g,is,i-1,j);
        dfs(g,is,i,j+1);
        dfs(g,is,i,j-1);
    }
    
    int shortestBridge(vector<vector<int>>& grid) {
        set<pair<int,int>> is1,is2;
        
        int n=grid.size();
        vector<vector<bool>> vis(n,vector<bool>(n,false));
        int f=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {  
                if(grid[i][j]==1&&!vis[i][j])
                {
                    if(f==0)
                    {   
                        dfs(grid,is1,i,j);
                        f++;
                    }
                    else
                        dfs(grid,is2,i,j);
                 }
             }
        }
        int ans=INT_MAX;
     
        for(auto i :is1)
        for(auto j :is2) 
            ans=min(ans,(abs(i.first - j.first) + abs(i.second - j.second)-1));
        return ans;
    }
};