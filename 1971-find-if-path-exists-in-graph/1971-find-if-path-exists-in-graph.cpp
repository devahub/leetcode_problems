class Solution {
public:
    
    
    
    bool dfs(vector<vector<int>>&graph,vector<int>&vis,int start,int end){
        if(start==end){
            return true;
        }
        if(vis[start])
            return false;
        
        vis[start]=1;
        
        for(int i=0;i<graph[start].size();i++){
            if(dfs(graph,vis,graph[start][i],end)){
                return true;
            }
        }
        
       return false; 
    }
    
    
    
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        vector<vector<int>>graph(n);
        vector<int>vis(n,0);
        
        for(int i=0;i<edges.size();i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        
        return dfs(graph,vis,start,end); 
    }
};