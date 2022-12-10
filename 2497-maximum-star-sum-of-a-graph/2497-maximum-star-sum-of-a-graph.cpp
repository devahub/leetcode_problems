class Solution {
public:
    
    /*
Traverse the graph to each node and at each node check for the max possible sum with at most k connected node.
As it says max value and at most k nodes we need to skip -ve value as it will always reduce the value.

Steps:
1. create a graph using the edges given.
2. Traverse to each node using dfs.
    - On each node create a priority queue to get sum of the max k nodes values 
    - Traverse to next connected node and get max possible value 
    - return max value among current node and the max value recieved from its connected node.
*/
    
    
    int dfs(vector<vector<int>>&g,vector<int>&vis,int node,int k,vector<int>&vals){
        int res=INT_MIN;
        priority_queue<int>pq;
        vis[node]=1;
        
        for(auto i:g[node]){
            if(vals[i] > 0) 
                pq.push(vals[i]);
            
            if(vis[i] == 0) 
                res = max(res, dfs(g, vis, i, k, vals));
        }
        
        int sum = vals[node];       
        while(k > 0 && pq.size() > 0){
            sum += pq.top();
            pq.pop();
            k--;
        }
        
        
        return max(res,sum);
    }
    
    
    
    int maxStarSum(vector<int>& vals, vector<vector<int>>& edges, int k) {
        int n=vals.size();
        int ans=INT_MIN;
        vector<int>vis(n,0);
        vector<vector<int>>g(n);        // adjacency matrix---->
        
        for(auto i: edges)                  // creating a graph---->
        {
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]); 
        }                 
        
        for(int i=0;i<n;i++){
            ans=max(ans,dfs(g,vis,i,k,vals));
        }
        
        return ans;
    }
};