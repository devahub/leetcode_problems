class Solution {
public:

    // using dfs----->
    
    
//     void dfs(vector<vector<int>>& rooms,vector<bool>&vis,int i){
//         vis[i]=true;
//         for(int j=0;j<rooms[i].size();j++){
//             if(!vis[rooms[i][j]]){
//                 dfs(rooms,vis,rooms[i][j]);
//             }
//         }
//     }
    
    
// bool canVisitAllRooms(vector<vector<int>>& rooms){
//          int n=rooms.size();
//          vector<bool>vis(n,false);
         
//          dfs(rooms,vis,0);
         
//          for(int i=0;i<n;i++){
//              if(!vis[i]){
//                  return false;
//              }
//          }
//          return true;
//      }
// };
    
    
    
    
    
    
    
    
    
    // using bfs------->
    
    bool canVisitAllRooms(vector<vector<int>>& rooms){
        int n=rooms.size();
        vector<int> vis(n, 0);
        queue<int> q;
        q.push(0);      
        
        
        while(!q.empty()){
            int cur=q.front();
            q.pop();
            vis[cur]=1;
            
            for(auto k:rooms[cur]){
                if(!vis[k]){
                    q.push(k);
                }   
            }
        }
      
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                return false;
            }
        }
        return true;
    }
};