class Solution {
public:
    
    // any graph with an odd length cycle can never be bipartite 
    // any graph with no cycle are always bipartite
    // any graph with a even cycle length can also be bipartite
    
    
    
    // using bfs----->
    
//      bool checkBip(int src, vector < int > adj[], vector < int > &vis){
//         vis[src] = 0;
        
//         queue<int>q;
//         q.push(src);
        
//         while(!q.empty()){
//             int front = q.front();
//             q.pop();
//             for(int x : adj[front]){
//                 if(vis[x] == -1){
//                     vis[x] = 1 - vis[front];
//                     q.push(x);
//                 }
//                 else if(vis[x] == vis[front])
//                     return false;
//             }
//         }
//         return true;
//     }
    
    
    
//     bool isBipartite(vector<vector<int>>& graph) {
//         int n=graph.size();
//         vector<int> vis(n+1, -1);        // make an adjacency list------>
//         vector<int>adj[n+1];
        
//          for(int i = 0; i < n ; i++){
//             for(int j = 0; j < graph[i].size(); j++){
//                 adj[i].push_back(graph[i][j]);
//                 adj[graph[i][j]].push_back(i);
//             }
//         }
        
//           for(int i=0;i<n;i++){
//             if(vis[i]==-1){
//                 if(!checkBip(i, adj,vis)) 
//                     return false;
//             }
//         }
//         return true;
//     }
// };
    
    
    
    
    
    // using dfs--->
    
    
    
     vector<int>vis,col;
    bool dfs(int v, int c, vector<vector<int>>& graph){
        vis[v]=1;
        col[v]=c;
        for(int child:graph[v]){
            if(vis[child]==0){
                // here c^1 is for flipping 1 by 0 or 0 by 1, that is flip the current color
                if(dfs(child,c^1,graph)==false) 
                    return false;
            }
            else{
                if(col[v]==col[child])
                    return false;
            }
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vis.resize(n);
        col.resize(n);

        for(int i=0;i<n;++i){
            if(vis[i]==0 && dfs(i,0,graph)==false){ 
                return false;
            }
        }
        
        return true;
    }
};