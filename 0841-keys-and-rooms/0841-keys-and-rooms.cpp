class Solution {
public:
//    void dfs(vector<vector<int>> &graph, int s, vector<bool> &vis){
//         vis[s] = true;
//         for(int i = 0; i < graph[s].size(); i++){
//             if(!vis[graph[s][i]]){
//                 dfs(graph, graph[s][i], vis);
//             }
//         }
//     }
    
//     bool canVisitAllRooms(vector<vector<int>>& rooms) {
//         int n=rooms.size();
        
//         vector<bool>vis(n,false);
        
//         dfs(rooms,0,vis);
        
//         for(int i=0;i<n;i++){
//             if(!vis[i]){
//                 return false;
//             }
//         }
//     return true;
        
//     }
// };
    
    void dfs(vector<vector<int>>& rooms,vector<bool>&vis,int i){
        vis[i]=true;
        for(int j=0;j<rooms[i].size();j++){
            if(!vis[rooms[i][j]]){
                dfs(rooms,vis,rooms[i][j]);
            }
        }
    }
    
    
    
     bool canVisitAllRooms(vector<vector<int>>& rooms){
         int n=rooms.size();
         vector<bool>vis(n,false);
         
         dfs(rooms,vis,0);
         for(int i=0;i<n;i++){
             if(!vis[i]){
                 return false;
             }
         }
         return true;
     }
};