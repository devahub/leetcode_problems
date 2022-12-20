class Solution {
public:
    
    // using recurssion----->Tle
    
//     int solve(vector<int>& nums,int i,int prev)
//     {
//         if(i>=nums.size()){
//             return 0;
//         }
        
//         int pick=0;
//         int npick=solve(nums,i+1,prev);
        
//         if(nums[i]>prev){
//             pick=1+solve(nums,i+1,nums[i]);
//         }
        
        
//         return max(pick,npick);
//     }
    
//     int lengthOfLIS(vector<int>& nums) {
//         return solve(nums,0,INT_MIN);
//     }
// };
    
    
    
    
    
        // using dp-->memoization---->
   
    
    int solve(int cur , int prev ,vector<int>& arr,vector<vector<int>> &dp){
        if(cur == arr.size())
            return 0;
            
        if(dp[cur][prev+1] != -1){
            return dp[cur][prev+1];
        }
        
        int nottake = solve(cur+1,prev,arr,dp);
       
        int take =0; 
        if(prev==-1 || arr[cur]>arr[prev]){
            take = 1+solve(cur+1,cur,arr,dp);
        }
        return dp[cur][prev+1]=max(nottake,take);
    }
    
    
     int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
         
        return solve(0,-1,nums,dp);
		}
};