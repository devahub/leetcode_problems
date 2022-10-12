class Solution
{
    public:
       	// dry run on pen n paper

       	    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
       	        vector < int>vis(n,0);
       	        vector < int>v;

       	        for(auto i:edges){
       	            vis[i[1]]=1;
       	        }

       	        for(int i=0;i < n;i++){
       	            if(vis[i]==0){
       	                v.push_back(i);
       	            }
       	        }
       	        return v;
       	    }
       	};

//         vector<int> findSmallestSetOfVertices(int n, vector<vector < int>> &edges)
//         {

//             map<int, int> mp;
//             for (auto i: edges)
//             {
//                 mp[i[1]]++;
//             }

//             vector<int> ans;
//             for (int i = 0; i < n; i++)
//             {
//                 if (mp.count(i) == false)
//                 {
//                     ans.push_back(i);
//                 }
//             }
//             return ans;
//         }
// };