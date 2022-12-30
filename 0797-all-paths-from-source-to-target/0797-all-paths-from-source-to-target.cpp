class Solution {
public:

    // using dfs----->
    
    
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
    
    
    
    
 
    
    
    
    
    // using bfs---->
    
//      vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
//          vector <vector<int>> result;
//         int n=graph.size(), s=0, e=n;
//         vector <int> adj[n];
//         for(int i=0; i<n; i++)
//             for(auto g : graph[i])
//                 adj[i].push_back(g);
        
//         queue <vector<int>> q;
//         vector <int> path;
//         q.push({0});
//         while(!q.empty()){
//             path = q.front();
//             q.pop();
//             if(path.back() == n-1)
//                 result.push_back(path);
            
//             for(auto ele : adj[path.back()]){
//                 vector <int> temp = path;
//                 temp.push_back(ele);
//                 q.push(temp);
//             }
//         }
//         return  result;
         
//      }
// };
    
    