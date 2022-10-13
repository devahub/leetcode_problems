class Solution {
public:
    
    int dirx[8]={0, 0, 1, -1, 1, 1, -1, -1};
    int diry[8]={1, -1, 0, 0, -1, 1, -1, 1};
        
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if (grid[0][0] != 0 || grid[n - 1][n - 1] != 0)
		{
			return -1;
		}
     
        
        int size=0;
        int steps=0;
        queue<pair<int,int>>q;
        q.push({0,0});
        
        while(!q.empty()){
            steps++;
            size=q.size();
            while(size--){
                
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
                
        if(row==n-1 && col==n-1){
            return steps;
        }
        
        for(int i=0;i<8;i++){
            int newx=dirx[i]+row;
            int newy=diry[i]+col;
            
        if (newx >= 0 && newx < n && newy >= 0 && newy < n && grid[newx][newy] == 0)
        {
            grid[newx][newy] = 1;
			q.push({newx, newy});
            }
        }  
    }
}
        return -1;
        
    }
};