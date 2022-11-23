class Solution {
public:
    // recurssion + memoization
    
    int solve(string s,vector<int>&dp,int i){
       
        if(i==s.size()){
             return 1;
         } 
        if(s[i]=='0')
            return 0;
        
         if(i==s.size()-1){
             return 1;
         }
        if(dp[i]!=-1){
           return dp[i];
          } 
        
        int way1=solve(s,dp,i+1);
        int way2=0;
        string b=s.substr(i,2);
        if(stoi(b)>0 && stoi(b) <=26){
            way2=solve(s,dp,i+2);
        }
        return dp[i]=way1+way2;
        
    }
    
    
     int numDecodings(string s){
         int n=s.size();
         vector<int>dp(n+1,-1);
         int ans=0;
         ans=solve(s,dp,0);
         return ans;
         }
};
    
    
        // brute soln---->recurssion
    
//     int solve(string s,int i){
//         if(i==s.size()){
//             return 1;
//         } 
        
//        if(s[i]=='0')
//            return 0;
        
//         if(i==s.size()-1){
//             return 1;
//         }
        
//         int way1=solve(s,i+1);
        
//         int way2=0;
//         string b=s.substr(i,2);
//          if(stoi(b)<=26 && stoi(b)>0){
//             way2 = solve(s,i+2);
//         }
//         return way1+way2;
//      }
    
//     int numDecodings(string s) {
//         int ans=0;
//         ans=solve(s,0);
//         return ans;
//     }
// };


