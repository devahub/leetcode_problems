class Solution {
public:
    int dfs(vector<int> adj[],int src,vector<int>& informTime){
        
        int k=informTime[src];
        int maxi=0;
        
        for(auto i:adj[src]){
            maxi=max(maxi,dfs(adj,i,informTime));
        }
        return k+maxi;
    }
    
    
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<int>adj[n];
        
        for(int i=0;i<n;i++){
            if(manager[i]!=-1){
                adj[manager[i]].push_back(i);
            }
        }
        
       return dfs(adj,headID,informTime);
    
    }
};