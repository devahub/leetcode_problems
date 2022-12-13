class Solution {
public:
    // if we found any type of cycle then we will return false and if no cycle found then return true
    // find cycle in an undirected graph--->
    
    
    // dfs technique-----> 
    
//     bool iscycle(vector<int>adj[],vector<int>&vis,int id){
        
//         if(vis[id]==1)
//             return true;
        
//         if(vis[id]==0){
//             vis[id]=1;
//             for(auto edge : adj[id]){
//                 if(iscycle(adj,vis,edge))
//                     return true;
//             }
//         }
        
//         vis[id] = 2;            // mark it as visited
//         return false;   
//     }
    
    
//     bool canFinish(int n, vector<vector<int>>& pre) {
//         vector<int> vis(n,0);
//         vector<int> adj[n];
//         for(auto i : pre){
//             adj[i[1]].push_back(i[0]);
//         }
       
//         for(int i=0;i<n;i++){
//             if(iscycle(adj,vis,i))
//                 return false;
//         }
//         return true;
//     }
// };

    
    
    
    
    
    // using topological sort----->bfs  kahn algorithm----->
    
     bool canFinish(int n, vector<vector<int>>& pre) {
         if(pre.size()==0) 
             return true;
         vector<vector<int>>graph(n);
         vector<int>indegree(n,0);
         
        for(auto i:pre){
            graph[i[1]].push_back(i[0]);
            indegree[i[0]]++;
        }
         
         int c=0;
         queue<int>q;
         
         for(int i=0;i<n;i++){
             if(indegree[i]==0){
                 q.push(i);
                 indegree[i]--;
             }
         }
         if(q.size()==0){
             return false;
         }
         
         while(!q.empty()){
             int size=q.size();
             
             for(int i=0;i<size;i++){
                 int cur=q.front();
                 q.pop();
                 c++;
                 
                 for(auto j:graph[cur]){
                     indegree[j]--;
                     if(indegree[j]==0){
                         q.push(j);
                     }
                 }        
             }
         }
         
         if(c==n){              // means no cycle--->
             return true;
         }
         return false;
     }
};