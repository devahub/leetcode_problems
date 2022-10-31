class Solution {
public:
    string oddString(vector<string>& words) {
        int n=words.size();
        int m=words[0].size();
        map<vector<int>,vector<string>>mp;
        
        for(auto i:words){
            vector<int>v;
            for(int j=1;j<m;j++){
                v.push_back(i[j]-i[j-1]);
            }
            mp[v].push_back(i);
        }
        
        
        for(auto i:mp){
            if(i.second.size()==1){
                return i.second[0];
            }
        }
        return "";
    }
};