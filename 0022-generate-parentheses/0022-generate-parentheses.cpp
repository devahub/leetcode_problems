class Solution {
public:
   
    
    void solve(int n,int open,int close,string cur,vector<string>&v){
        
        if(n*2==cur.size()){
            v.push_back(cur);
            return;
        }
        
        if(open<n){
            solve(n,open+1,close,cur+'(',v);
        }
        
        if(close<open){
        solve(n,open,close+1,cur+')',v);
        }
    }
    
    
    vector<string> generateParenthesis(int n) {
        vector<string>v;
        string cur="";
        solve(n,0,0,cur,v);
        return v;
    }
};