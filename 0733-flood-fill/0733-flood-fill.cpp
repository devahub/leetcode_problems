class Solution {
public:
    
    //dfs--->
    
//     void solve(vector<vector<int>>& image, int sr, int sc, int color,int x){
//        
//    if(sr>=image.size() || sc>=image[0].size() || sr<0 || sc<0 ||image[sr][sc]!=x ||                         image[sr][sc]==color)
//                return;
        
//         image[sr][sc]=color;   
//         solve(image,sr+1,sc,color,x);
//         solve(image,sr,sc-1,color,x);
//         solve(image,sr,sc+1,color,x);
//         solve(image,sr-1,sc,color,x);
        
//     }  
//        vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//              int x=image[sr][sc];
//              solve(image,sr,sc,color,x);
//              return image;
//     }
// };


    
    
    
    // bfs----->
    
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color){
    
    int m =image.size();
    int n=image[0].size();
    
    vector<vector<int>>vis(m,vector<int>(n,0));
    queue<pair<int,int>>pq;
    pq.push({sr,sc});
    vis[sr][sc]=1;
    
    while(pq.size()>0)
        {
            int i=pq.front().first;
            int j=pq.front().second;
            
            pq.pop();
            
            if(i-1>=0&&image[i-1][j]==image[i][j]&& vis[i-1][j]==0)
            {
                vis[i][j]=1;
                pq.push({i-1,j});
            }
            if(j-1>=0&&image[i][j-1]==image[i][j]&& vis[i][j-1]==0)
            {
                vis[i][j-1]=1;
                pq.push({i,j-1});
            }
            if(i+1<image.size()&&image[i+1][j]==image[i][j]&& vis[i+1][j]==0)
            {
                vis[i+1][j]=1;
                pq.push({i+1,j});
            }
            if(j+1<image[0].size()&&image[i][j+1]==image[i][j]&& vis[i][j+1]==0)
            {
                vis[i][j+1]=1;
                pq.push({i,j+1});
            }
    image[i][j]=color;
    }
    return image;
    }
};