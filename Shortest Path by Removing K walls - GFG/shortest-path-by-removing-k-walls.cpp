//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
  int solve(vector<vector<int>>& mat,int k){
        vector<vector<int>> vis(mat.size(),vector<int>(mat[0].size(),-1));
        queue<vector<int>> q;
	
        q.push({0,0,0,k});
        while(!q.empty()){
            auto t=q.front();
            int x=t[0];
            int y=t[1];
            q.pop();
			
			// Exit if current position is outside of the grid
            if(x<0 || y<0 || x>=mat.size() || y>=mat[0].size()){
                continue;
            }
			
			// Destination found    // if reached destination, return current length of path
            if(x==mat.size()-1 && y==mat[0].size()-1)
                return t[2];

            
            // If we hit an obstacle & we don't have any Ks remaining, continue
            // If we still have Ks to spend, we spend 1.
            if(mat[x][y]==1){
                if(t[3]>0)
                    t[3]--;
                else
                    continue;
            }
			

            if(vis[x][y]!=-1 && vis[x][y]>=t[3])
                continue;
            vis[x][y]=t[3];
            
            q.push({x+1,y,t[2]+1,t[3]});
            q.push({x,y+1,t[2]+1,t[3]});
            q.push({x-1,y,t[2]+1,t[3]});
            q.push({x,y-1,t[2]+1,t[3]});
            
        }
        return -1;
    }
  
    int shotestPath(vector<vector<int>> mat, int n, int m, int k) {
        return solve(mat,k);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k, x;
        
        cin>>n>>m>>k;
        vector<vector<int>> mat;
    
        for(int i=0; i<n; i++)
        {
            vector<int> row;
            for(int j=0; j<m; j++)
            {
                cin>>x;
                row.push_back(x);
            }
            mat.push_back(row);
        }

        Solution ob;
        cout<<ob.shotestPath(mat,n,m,k);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends