class Solution {
public:
    void dfs(vector<vector<int>>& graph , vector<bool>& vis , int start){
        vis[start]=true;
        for(auto it : graph[start]){
            if(!vis[it]){
                dfs(graph , vis , it );
            }
        }
    }
    
    
    int makeConnected(int n, vector<vector<int>>& connections) {
       
        if(n>connections.size()+1){
            return -1;
        }
        
        vector<vector<int>>graph(n);
        vector<bool>vis(n,false);
        
        for(auto con : connections){
            graph[con[0]].push_back(con[1]);
            graph[con[1]].push_back(con[0]);
        }
        
        int c=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                c++;
                dfs(graph,vis,i);
            }
        }
        return c-1;
    }
};