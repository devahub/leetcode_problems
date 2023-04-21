class Solution {
public:
    
//     bool solve(string s, string p, int i, int j,vector<vector<int>> &dp){
//         if(j==p.size())
//             return i==s.size();
        
//         if(dp[i][j]!=-1){
//             return dp[i][j];
//         }
        
//         bool first_match=(i<s.size() && (s[i]==p[j] || p[j]=='.' ));
        
//         bool ans=0;
//         if(j+1<p.size() && p[j+1]=='*')
//         {
//             ans= (solve(s,p,i,j+2,dp)|| (first_match && solve(s,p,i+1,j,dp) ));
//         }
//         else
//         {
//             ans= (first_match && solve(s,p,i+1,j+1,dp));
//         }
//         dp[i][j]=ans;
//         return ans;
//     }
    
    
    
//     bool isMatch(string s, string p) {
//         vector<vector<int>> dp(s.size()+1,vector<int>(p.size(),-1));
//         return solve(s,p,0,0,dp);    
//     }
// };
    
    
    
    bool fun(string s,string p,int i,int j){
        if(i==-1 && j==-1) return true;
        if(i!=-1 && j==-1) return false;
        if(i==-1 && j!=-1){
            if(p[j]=='*') return fun(s,p,i,j-2);
            else{
                return false;
            }
        }
        else{
            if(s[i]==p[j] || p[j]=='.') return fun(s,p,i-1,j-1);
            else if(p[j]=='*'){
                if(s[i]==p[j-1] || p[j-1]=='.') return fun(s,p,i-1,j) || fun(s,p,i,j-2);
                else{
                    return fun(s,p,i,j-2);
                }
            }
            else{
                return false;
            }
        }
    }
    
    bool isMatch(string s, string p) {
        return fun(s,p,s.size()-1,p.size()-1);
        
    }
};