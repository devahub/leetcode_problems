class Solution
{
    public:

       	//brute force->>using recurssion-TLE 

       	//     int mod=1e9+7;
       	//     int solve(int size,int zero,int one,int n){
       	//         if(size==n){
       	//             return 1;
       	//         }
       	//         if(size>n)return 0;

       	//         int res = 0;
       	//         res = res + solve(size + zero,zero,one,n)%mod;

       	//         res = res + solve(size + one,zero,one,n)%mod;

       	//         return res;
       	//      }

       	//     int countGoodStrings(int low, int high, int zero, int one) {
       	//         int ans=0;
       	//         for(int i=low;i<=high;i++){
       	//             ans=ans+solve(0,zero,one,i)%mod;
       	//         }

       	//      return ans;   
       	//     }
       	// };

       	// using dp--->

    int mod = 1e9 + 7;

    int solve(int target, vector<int> &dp, int one, int zero)
    {
        if (target == 0)
            return 1;
        if (target < 0)
            return 0;
        if (dp[target] != -1)
            return dp[target];
        
        long long sum;
        sum = solve(target - one, dp, one, zero) + solve(target - zero, dp, one, zero);
        return dp[target] = (sum % (mod));
    }
    
    
    int countGoodStrings(int low, int high, int zero, int one)
    {
        vector<int> dp(high + 1, -1);

        int ans = 0;

        for (int i = low; i <= high; i++)
        {
            ans = ((ans % mod) + (solve(i, dp, one, zero) % mod)) % mod;
        }
        return ans;
    }
};