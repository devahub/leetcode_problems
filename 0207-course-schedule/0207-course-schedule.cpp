class Solution {
public:
    // if we found any type of cycle then we will return false and if no cycle found then return true
    // find cycle in an undirected graph--->
    
    
    // dfs technique-----> 
    
    bool iscycle(vector<int>adj[],vector<int>&vis,int id){
        
        if(vis[id]==1)
            return true;
        
        if(vis[id]==0){
            vis[id]=1;
            for(auto edge : adj[id]){
                if(iscycle(adj,vis,edge))
                    return true;
            }
        }
        
        vis[id] = 2;            // mark it as visited
        return false;   
    }
    
    
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<int> vis(n,0);
        vector<int> adj[n];
        for(auto i : pre){
            adj[i[1]].push_back(i[0]);
        }
       
        for(int i=0;i<n;i++){
            if(iscycle(adj,vis,i))
                return false;
        }
        return true;
    }
};
