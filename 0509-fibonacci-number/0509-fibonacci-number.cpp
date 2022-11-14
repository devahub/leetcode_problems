class Solution {
public:
   // int fib(int n) { 
       // if(n<=1)                                          // brut- recurssion
       //     return n;
       //  int ans=fib(n-1)+fib(n-2);
       //  return ans;
        
        
//     int dp[31]={0};
//     int fib(int n) { 
        
//         if(n <= 1)
// 		    return n;
// 	    if(dp[n]!=0)
// 		return dp[n];
        
//         return dp[n]=fib(n-1)+fib(n-2);
        
//     }
// };
    
    
    
    int fib(int n) {
        if(n==0)return 0;
        if(n==1)return 1;
        return fib(n-1)+fib(n-2);
        
    }
};