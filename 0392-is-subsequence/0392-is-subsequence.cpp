class Solution {
public:
     // using two pointer-----> 
    
//     bool isSubsequence(string s, string t) {
    
//         int j=0;
//         for(int i=0;i<t.size() && j<s.size();i++){
//             if(s[j]==t[i]){
//                 j++;
//             }
            
//         }
//         return (j==s.size());
        
//     }
// };
    
    
    // using dp----->
    
    int solve(string s, string t,int m,int n,vector<vector<int>>&dp){
        if(m == 0 || n == 0)
            return 0;
        if(dp[m][n] != -1)
            return dp[m][n];
        
        if(s[m-1] == t[n-1])
            return dp[m][n] = 1 + solve(s,t,m-1,n-1,dp);
        else
            return dp[m][n] = solve(s,t,m,n-1,dp);
    }
    
    
     
    bool isSubsequence(string s, string t){
         int m=s.size();
         int n=t.size();
         
         if(m >  n)
            return false;
        
         vector<vector<int>> dp(m+1,vector<int> (n+1,-1));
         
         if(solve(s,t,m,n,dp)==s.size()){
             return true;
         }
         return false;
         
         
     }
}; 