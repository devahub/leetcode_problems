class Solution {
public:
    
    // using recurssion------>Tle
    
//   int solve(string text1, string text2,int m,int n) {
//         if(m==0 || n==0){
//             return 0;
//         }
      
//         if(text1[m-1]==text2[n-1]){
//             return 1+solve(text1,text2,m-1,n-1);
//         }
//       else{
//             return max(solve(text1,text2,m-1,n),solve(text1,text2,m,n-1));
//         }
//     }
    
//     int longestCommonSubsequence(string text1, string text2) {
//         int m=text1.size();
//         int n=text2.size();
//         return solve(text1,text2,m,n);
//     }
// };
    
    
    // using dp------->
    
    
   int dp[1000 + 1][1000 + 1];
    
    int maxLen(string& s1, string& s2, int n, int m)
    {
        if (n == 0 || m == 0)
            return 0;
        
        if (dp[n][m] != -1)
            return dp[n][m];

        if (s1[n - 1] == s2[m - 1])
            return dp[n][m] = 1 + maxLen(s1, s2, n - 1, m - 1);
        else
            return dp[n][m] = max(maxLen(s1, s2, n , m - 1),maxLen(s1, s2, n - 1, m ));
    }
        
    int longestCommonSubsequence(string s1, string s2) 
    {
        memset(dp, -1, sizeof(dp));        
        return maxLen(s1, s2, s1.length(), s2.length());
    }
};