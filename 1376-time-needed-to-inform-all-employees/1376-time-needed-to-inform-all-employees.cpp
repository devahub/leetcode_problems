class Solution {
public:
//     int dfs(vector<int> adj[],int src,vector<int>& informTime){
        
//         int k=informTime[src];
//         int maxi=0;
        
//         for(auto i:adj[src]){
//             maxi=max(maxi,dfs(adj,i,informTime));
//         }
//         return k+maxi;
//     }
    
    
//     int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
//         vector<int>adj[n];
        
//         for(int i=0;i<n;i++){
//             if(manager[i]!=-1){
//                 adj[manager[i]].push_back(i);
//             }
//         }
        
//        return dfs(adj,headID,informTime);
    
//     }
// };
    
    
    
    
    
    
    //  using map--->
    
    
     int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        unordered_map<int,vector<int> >m;
        for(int i=0;i<manager.size();i++) {
            m[manager[i]].push_back(i);
        }
        queue<pair<int,int>>q;
        q.push(make_pair(headID,0));
        int maxi=0;
         
         
        while(!q.empty()) {
            int n=q.size();
            for(int i=0;i<n;i++) {
                int head=q.front().first;
                int timeTaken=q.front().second;
                q.pop();
                int dur=informTime[head]+timeTaken;
                maxi=max(maxi,dur);
                for(auto it:m[head]) {
                    q.push(make_pair(it,dur));
                }
            }
        }
        return maxi;
    }
};