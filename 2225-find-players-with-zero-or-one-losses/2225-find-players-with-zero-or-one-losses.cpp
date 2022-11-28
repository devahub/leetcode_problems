class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>ans(2);
        unordered_map<int,int>mp;
        
       for(int i=0;i<matches.size();i++){
           mp[matches[i][1]]++;
       }
        
      for(auto i=mp.begin();i!=mp.end();i++)
        {
            if(i->second==1)
            {
                ans[1].push_back(i->first);
            }
        }   
        
     for(int i=0;i<matches.size();i++)
        {
            if(mp[matches[i][0]]==0)
            {
                ans[0].push_back(matches[i][0]);
                mp[matches[i][0]]=1;
            }
        }
        
   
        
        sort(ans[0].begin(),ans[0].end());
        sort(ans[1].begin(),ans[1].end());
        
        return ans;
    }
};