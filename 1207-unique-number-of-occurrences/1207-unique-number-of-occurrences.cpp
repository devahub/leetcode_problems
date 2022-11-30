class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        vector<int>v;
        
        for(auto i:arr)mp[i]++;
        
        for(auto i:mp){
            v.push_back(i.second);
        }
         sort(v.begin(),v.end());
        
        for(int i=1;i<v.size();i++){
            if(v[i]==v[i-1]){
                return false;
            }
        }
        return true;
    }
};