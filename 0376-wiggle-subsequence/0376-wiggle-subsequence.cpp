class Solution {
public:
     int solve(int i,int prev,int s,vector<int> &a,vector<vector<vector<int>>> &dp)
    {
        if(i<0)return 0;
        if(dp[i][prev][s]!=-1)return dp[i][prev][s];
         
        int nt=0,t=0;
        nt=solve(i-1,prev,s,a,dp);
        
         if(prev==a.size())
            t=1+solve(i-1,i,s,a,dp);
         
        else if(s==1&&a[i]>a[prev])
            t=1+solve(i-1,i,0,a,dp);
         
        else if(s==0&&a[i]<a[prev])
            t=1+solve(i-1,i,1,a,dp);
         
        return dp[i][prev][s]= max(t,nt);
            
    }
    int wiggleMaxLength(vector<int>& a) {
        
        int n=a.size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>> (n+1,vector<int>(2,-1)));
        return max(solve(n-1,n,1,a,dp), solve(n-1,n,0,a,dp));
    }
};