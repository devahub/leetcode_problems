class Solution {
public:
    void dfs(vector<vector<int>>& graph,vector<int>&vis, vector<vector<int>>&ans,int i){
        vis.push_back(i);
        
        
        if(i==graph.size()-1){
            ans.push_back(vis);
        }
        for(int j=0;j<graph[i].size();j++){
            dfs(graph,vis,ans,graph[i][j]);
        }
        vis.pop_back();
    }
    
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        vector<int>vis;
        dfs(graph,vis,ans,0);
        return ans;
    }
};