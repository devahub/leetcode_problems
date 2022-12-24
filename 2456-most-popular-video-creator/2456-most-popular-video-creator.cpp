class Solution {
public:
    
    static bool cmp(pair<string, int>p1, pair<string, int>p2 ){
          if(p1.second!=p2.second) return p1.second>p2.second; 
           return p1.first<p2.first;
    }
    
    
    vector<vector<string>> mostPopularCreator(vector<string>& creators, vector<string>& ids, vector<int>& views) {
        
        int n=ids.size();
        unordered_map<string,vector<pair<string,int>>>mp;
        unordered_map<string,long long>mp1;
        
        for(int i=0;i<n;i++){
            mp[creators[i]].push_back({ids[i], views[i]});
            mp1[creators[i]]+=views[i];
        }
        
        long long maxi=0;
        for(auto i:mp1){
            maxi=max(maxi,i.second);
        }
        
        vector<vector<string>>res1;
        vector<string>res;
        
        for(auto it:mp1){
            if(it.second==maxi) 
                res.push_back(it.first);
        }
        
        
        for(auto x:res){
            vector<string>v;
            auto temp= mp[x];
            sort(temp.begin(), temp.end(), cmp);
            v.push_back(x);
            v.push_back(temp[0].first);
            res1.push_back(v);
        }
        return res1;
        
    }
};