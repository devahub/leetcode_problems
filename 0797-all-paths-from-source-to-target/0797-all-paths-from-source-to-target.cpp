class Solution {
public:
    
    void dfs(vector<vector<int>>& graph,vector<int>&v, vector<vector<int>>&ans,int i){
        
        v.push_back(i);
    
        if(i==graph.size()-1){
            ans.push_back(v);
        }
        
        for(int j=0;j<graph[i].size();j++){
            dfs(graph,v,ans,graph[i][j]);
        }
        
        v.pop_back();
    }
    
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        vector<int>v;
        dfs(graph,v,ans,0);
        return ans;
    }
};