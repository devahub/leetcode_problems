class Solution {
public:
    
    // any graph with an odd length cycle can never be bipartite 
    // any graph with no cycle are always bipartite
    // any graph with a even cycle length can also be bipartite
    
     bool checkBip(int src, vector < int > adj[], vector < int > &vis){
        vis[src] = 0;
        
        queue < int > q;
        q.push(src);
        
        while(!q.empty()){
            int front = q.front();
            q.pop();
            for(int x : adj[front]){
                if(vis[x] == -1){
                    vis[x] = 1 - vis[front];
                    q.push(x);
                }
                else if(vis[x] == vis[front])
                    return false;
            }
        }
        return true;
    }
    
    
    
    
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        
        // make an adjacency list------>
        
        vector<int> vis(n+1, -1);
        vector<int>adj[n+1];
        
         for(int i = 0; i < n ; i++){
            for(int j = 0; j < graph[i].size(); j++){
                adj[i].push_back(graph[i][j]);
                adj[graph[i][j]].push_back(i);
            }
        }
        
          for(int i=0;i<n;i++){
            if(vis[i]==-1){
                if(!checkBip(i, adj,vis)) 
                    return false;
            }
        }
        return true;
    }
};