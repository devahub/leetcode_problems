class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        
         vector<vector<int>>graph(n);
         vector<int>indegree(n,0);
         vector<int>topo;
        
        for(auto i:pre){
            graph[i[1]].push_back(i[0]);
            indegree[i[0]]++;
        }
         
     
         queue<int>q;
         
         for(int i=0;i<n;i++){
             if(indegree[i]==0){
                 q.push(i);
                 indegree[i]--;
             }
         }
      
         while(!q.empty()){
             int size=q.size();
             
             for(int i=0;i<size;i++){
                 int cur=q.front();
                 q.pop();
                 topo.push_back(cur);
                 
                 
                 for(auto j:graph[cur]){
                     indegree[j]--;
                     if(indegree[j]==0){
                         q.push(j);
                     }
                 }        
             }
         }
         
         if(topo.size()==n){              // means no cycle--->
             return topo;
         }
         return {};
    }
};