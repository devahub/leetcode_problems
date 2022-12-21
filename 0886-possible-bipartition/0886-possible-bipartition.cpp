class Solution {
public:
   bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        
        vector<int> color(n+1,-1);
        vector<int> adj[n+1];
        for(auto p:dislikes){
            adj[p[0]].push_back(p[1]);
            adj[p[1]].push_back(p[0]);
        }
        for(int node=1;node<=n;node++){
            if(color[node]==-1){
                
                if(cycle(node,adj,color)){
                    return false; // if adjacent node become same color as 
                                  // current node, no bipartition possible
                }
            }
        }
        return true;
    }
    bool cycle(int node,vector<int> adj[], vector<int> &color){
        if(color[node]==-1){
            color[node]=1;
        }
        for(int child:adj[node]){
            if(color[child]==-1){
                color[child]=1-color[node];
                if(cycle(child,adj,color)){
                    return true; // finding adjacent node having same color
                }
            }
            else if(color[child]==color[node]){
                return true;// finding adjacent node having same color
            }
        }
        return false;
    }
};