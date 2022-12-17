class Solution {
public:
    
    int solve(vector<vector<int>>& dun,int m,int n,int i,int j,vector<vector<int>>&dp)
    {
       if(i >= m || j >= n)
            return INT_MAX;
       
        if(dp[i][j]!=-1){
           return dp[i][j];
       } 
        
        int down = solve(dun,m,n,i + 1, j, dp);
        int right = solve(dun,m,n,i, j + 1, dp);
        
        int health=min(down,right);
        
       if(health==INT_MAX){
           health=1;
       }
        
        int ans=0;
        
        if(health-dun[i][j]>0){             // if we found demon thenm health will decrease
            ans=health-dun[i][j];
        }
        else{                               // else hea
            ans=1;
        }
        
        return dp[i][j]=ans;
    }
    
    
    int calculateMinimumHP(vector<vector<int>>& dun) {
        int m=dun.size();
        int n=dun[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        
        return solve(dun,m,n,0,0,dp);
    }
};