class Solution {
public:
    
    // we will noramally check for every index whether the word formed is palindrome or not and find max length word later.------------>dp solution
    
    bool ispal(string &s,int i,int j,vector<vector<int>>&dp){
       if(i>=j)
    {
          return 1;
        }
            if(dp[i][j]!=-1)
         {
              return dp[i][j];
            }
        if(s[i]==s[j])
        {
          return dp[i][j]=ispal(s,i+1,j-1,dp);
        }
     return dp[i][j]= 0;
    }

    
    string longestPalindrome(string s) {
        int n=s.size();
        int maxi=0;
        string ans;
        vector<vector<int>>dp(n,vector<int>(n,-1));
        
        
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                
                if(ispal(s,i,j,dp)){
                    if(j-i+1>maxi){
                        maxi=j-i+1;
                        ans=s.substr(i,j-i+1);
                }
                }
            }
        }
    return ans;    
    }
};









//  approach ---->2------->

// Approach-1: Use 2 pointers approach.
// For odd length palindromic substring, we start from same index and check for near characters
// For even length palindromic substring, start from adjacent index and check for near characters.

// Time Complexity: O(2N^2)
// Space Complexity: O(1)



// class Solution {
// public:
//     string longestPalindrome(string s) 
//     {
//         int lenMax = 0;
//         string res;
        
//         for(int i=0; i<s.length(); i++)
//         {
//             string odd = pali_subs(s, i, i); 
//             long_subs(odd, res, lenMax);
//             string even = pali_subs(s, i, i+1); 
//             long_subs(even, res, lenMax);
//         }
//         return res;
//     }
	
// 	string pali_subs(string &s, int L, int R)
//     {
//         int n=s.size();
//         while(L>=0 && R<n) 
//         {
//             if(s[L]!=s[R]) break;
//             L--;
//             R++;
//         }
//         return s.substr(L+1, R-1-L); 
//     }
    
//     void long_subs(string &new_s, string &res, int &lenMax)
//     {
//         if(new_s.size()>lenMax)
//         {
//             res = new_s;
//             lenMax = new_s.size();
//         }
//     }
// };



