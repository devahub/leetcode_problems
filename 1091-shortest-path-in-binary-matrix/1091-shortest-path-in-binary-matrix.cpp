class Solution {
public:
    
    
    
     bool isValid(int r, int c, int n, vector<vector<int>> &grid, vector<vector<bool>> &visited)
    {
        return (r>=0 && c>=0 && r<n && c<n && grid[r][c]==0 && !visited[r][c]);
    }
    
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        queue<pair<int,int>>q;
        int ans=0;
        
        vector<vector<bool>> visited(n, vector<bool> (n, false)); 
        int size;
        
        
        if(!grid[0][0]){
            q.push({0,0});
            visited[0][0]=true;
        }
        
        while(!q.empty()){
            
            size=q.size();
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