class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        int mod=1e9+7;
        vector<int>v;
       
      for(int i = 0; i < 32; ++i){
          if((n & (1<<i)) != 0) v.push_back(1<<i);
      }
        
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
           long val=1;
            for(int j=queries[i][0];j<=queries[i][1];j++){
               val=(val*v[j])%mod;
               
           }
            ans.push_back(val);
        }
        return ans;
    
    }
};