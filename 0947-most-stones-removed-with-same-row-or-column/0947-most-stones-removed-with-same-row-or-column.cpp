class Solution {
public:
//     int dfs(vector<vector<int>>&stones,vector<bool>&vis,int i){
//         vis[i]=true;
//         int res=0;
        
//         for(int j=0;j<stones.size();j++){
//             if(!vis[j] && (stones[j][0]==stones[i][0]||stones[j][1]==stones[i][1]))
//                 res+=dfs(stones,vis,j)+1;
//         }
//     return res;
//      }
    
//     int removeStones(vector<vector<int>>& stones) {
//        int ans=0;
//         int n=stones.size();
//         vector<bool>vis(n,false);
        
//         for(int i=0;i<n;i++){
//             if(vis[i]){
//                 continue;
//             }
//             ans+=dfs(stones,vis,i);
//         }
//         return ans;
//     }
// };
    
    void dfs(vector<vector<int>>&stones,int index,vector<bool>&visited,int&n){
        visited[index]=true;
        for(int i=0;i<n;i++)
            if(!visited[i]&&(stones[i][0]==stones[index][0]||stones[i][1]==stones[index][1]))
                dfs(stones,i,visited,n);
        
    }
    int removeStones(vector<vector<int>>&stones) {
        int n = stones.size();
        vector<bool>visited(n,0);
        int count=0;
        
        for(int i=0;i<n;i++){
            if(visited[i]){
                continue;
            }
            
            dfs(stones,i,visited,n);
            count++;
        }
        return n-count;
    }
};