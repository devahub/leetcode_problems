class Solution {
public:
//     int findCenter(vector<vector<int>>& edges) {
//         //  if(edges[0][1]==edges[1][0] or edges[0][1]==edges[1][1]){
//         //     return edges[0][1];
//         //  }
//         // return edges[0][0];    
        
        
//      //   appraoch 2------>
//             int n= edges.size();
//             vector<int>adj[n+2];
        
//         for(int i=0;i<n;i++){
//             int i=edges[i][0];
//             int j=edges[i][1];
//             adj[i].push_back(j);
//             adj[j].push_back(i);
            
//         }
       
//         for(int i=0;i<n;i++){
                     
            
//         }
        
    
    
//     }
// };
    
    
    
    
    
    
    // using map---->
    
        int findCenter(vector<vector<int>>& edges) {
            unordered_map<int,int>mp;
            for(int i=0;i<edges.size();i++){
                mp[edges[i][0]]++;
                mp[edges[i][1]]++;
            }
            
            for(auto i:mp){
                if(i.second==edges.size()){
                    return i.first;
                }
            }
            return -1;
        }
};