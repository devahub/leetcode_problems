//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    
     bool isvalid(int row, int col, vector<vector < int>> &mat)
        {
            if (row < 0 or row >= mat.size() or col < 0 or col >= mat[0].size())
            {
                return false;
            }
            return true;
    }
    
    
	vector<vector<int>>nearest(vector<vector<int>>mat)
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
                if (mat[i][j] == 1)
                {
                    q.push({{i,j},0 });
                    vis[i][j] = true;
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

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends