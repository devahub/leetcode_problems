class Solution {
public:
    
     void dfs(string&labels, vector<vector<int>>&adj, vector<int>&ans,vector<int>&mp,int curr,int prev)
    {
       int prevCount = mp[labels[curr]-'a'];
       mp[labels[curr]-'a']++;

       for(int&ele : adj[curr])
       {
          if(ele!= prev)
          {
              dfs(labels,adj,ans,mp,ele,curr);
          } 
       }
       ans[curr] = mp[labels[curr]-'a']-prevCount;
    }
    
    
    
    
    
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<int>ans(n);
        vector<vector<int>>adj(n);
        
        for(auto i : edges)
      {
        adj[i[0]].push_back(i[1]);
        adj[i[1]].push_back(i[0]);
      }
        
        vector<int>mp(26,0);
      dfs(labels,adj,ans,mp,0,-1);
        
        
        return ans;
    }
};