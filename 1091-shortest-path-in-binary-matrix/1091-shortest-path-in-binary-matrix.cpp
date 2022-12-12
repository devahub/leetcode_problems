class Solution {
public:
    
    
    
    
//     int dirx[8]={0, 0, 1, -1, 1, 1, -1, -1};
//     int diry[8]={1, -1, 0, 0, -1, 1, -1, 1};
        
//     int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
//         int n=grid.size();
//         if (grid[0][0] != 0 || grid[n - 1][n - 1] != 0)
// 		{
// 			return -1;
// 		}
     
        
//         int size=0;
//         int steps=0;
//         queue<pair<int,int>>q;
//         q.push({0,0});
        
//         while(!q.empty()){
//             steps++;
//             size=q.size();
//             while(size--){
                
//             int row=q.front().first;
//             int col=q.front().second;
//             q.pop();
                
//         if(row==n-1 && col==n-1){
//             return steps;
//         }
        
//         for(int i=0;i<8;i++){
//             int newx=dirx[i]+row;
//             int newy=diry[i]+col;
            
//         if (newx >= 0 && newx < n && newy >= 0 && newy < n && grid[newx][newy] == 0)
//         {
//             grid[newx][newy] = 1;
// 			   q.push({newx, newy});
//             }
//         }  
//     }
// }
//         return -1;
        
//     }
// };
    
    
    
    
    
    
    
    // same approach using visited matrix--->
    
    
   bool isValid(int r, int c, int n, vector<vector<int>> &grid, vector<vector<bool>> &visited)
    {
        return (r>=0 && c>=0 && r<n && c<n && grid[r][c]==0 && !visited[r][c]);
    }
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        queue<pair<int, int>> q; 
        int ans=0;
        vector<vector<bool>> visited(n, vector<bool> (n, false)); 
        int size;
        
        if(!grid[0][0]) 
        {
            q.push({0,0});
            visited[0][0] = true;
        }
        
        while(!q.empty())
        {
            size = q.size();
            ans++;
            
            
            for(int cnt=0; cnt<size; cnt++) 
            {
                auto node = q.front(); 
                q.pop();
                int i = node.first;
                int j=node.second; 
                
                if(i==n-1 && j==n-1) 
                    return ans; 
                
                
                for(int r=i-1; r<=i+1; r++)
                {
                    for(int c=j-1; c<=j+1; c++)
                    {
                        if(isValid(r, c, n, grid, visited))
                        {
                            q.push({r,c});
                            visited[r][c] = true;
                        }
                    }
                }
            }
        }
        return -1;
            
    }
};
    
    
    
    
    
    
  