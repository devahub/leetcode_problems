class Solution {
public:
    bool pal(string s,int start,int end){
            while(start<=end){
                if(s[start++]!=s[end--]){
                    return false;
                }
                
            }
            return true;
        }
        
    void solve(string s,int index,vector<vector<string>>&ans,vector<string>&v){
        if(index==s.size()){
            ans.push_back(v);
            return;
        }
        for(int i=index;i<s.size();i++){
            if(pal(s,index,i)){
                v.push_back(s.substr(index,i-index+1));
                solve(s,i+1,ans,v);
                v.pop_back();
            }
        }
        
    }
      
    vector<vector<string>> partition(string s) {
        int n=s.size();
        vector<vector<string>>ans;
        vector<string>v;
        
        solve(s,0,ans,v);
        return ans;
    }
};