class Solution {
public:
//     vector<vector<int>> findWinners(vector<vector<int>>& matches) {
//         vector<vector<int>>ans(2);
//         unordered_map<int,int>mp;
        
//        for(int i=0;i<matches.size();i++){
//            mp[matches[i][1]]++;
//        }
        
//       for(auto i=mp.begin();i!=mp.end();i++)
//         {
//             if(i->second==1)
//             {
//                 ans[1].push_back(i->first);
//             }
//         }   
        
//      for(int i=0;i<matches.size();i++)
//         {
//             if(mp[matches[i][0]]==0)
//             {
//                 ans[0].push_back(matches[i][0]);
//                 mp[matches[i][0]]=1;
//             }
//         }        
//         sort(ans[0].begin(),ans[0].end());
//         sort(ans[1].begin(),ans[1].end());
        
//         return ans;
//     }
// };
    
    
    // more clean code
    
     vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int n=matches.size();
        
        vector<vector<int>> ans;
        map<int,int> m1,m2;
        
        for(int i=0;i<n;i++)
        {
            m1[matches[i][0]]++;
            m2[matches[i][1]]++;
        }
        
        vector<int> ans1;
        for(auto it : m1)
        {
            int key=it.first;
            auto x=m2.find(key);
            if(x==m2.end())
            {
                ans1.push_back(key);
            }
        }
        
        vector<int> ans2;
        for(auto it : m2)
        {
            if(it.second==1)
            {
                ans2.push_back(it.first);
            }
        }
        
        sort(ans1.begin(),ans1.end());
        sort(ans2.begin(),ans2.end());
        
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
        
        
        
    }
};