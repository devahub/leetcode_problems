class Solution {
public:
    
    //using 3d Dp----->
    
//      int solve(int i,int prev,int s,vector<int> &a,vector<vector<vector<int>>> &dp)
//     {
//         if(i<0)return 0;
//         if(dp[i][prev][s]!=-1)
//             return dp[i][prev][s];
         
//         int nt=0,t=0;
//         nt=solve(i-1,prev,s,a,dp);
        
//          if(prev==a.size())
//             t=1+solve(i-1,i,s,a,dp);
         
//         else if(s==1&&a[i]>a[prev])
//             t=1+solve(i-1,i,0,a,dp);
         
//         else if(s==0&&a[i]<a[prev])
//             t=1+solve(i-1,i,1,a,dp);
         
//         return dp[i][prev][s]= max(t,nt);
            
//     }
//     int wiggleMaxLength(vector<int>& a) {
        
//         int n=a.size();
//         vector<vector<vector<int>>> dp(n,vector<vector<int>> (n+1,vector<int>(2,-1)));
//         return max(solve(n-1,n,1,a,dp), solve(n-1,n,0,a,dp));
//     }
// };
    
    
    
    
    
    // using 2d Dp----->
    
    int solve(vector<int> &temp,vector<int> &dp,int ind, int prev,int n)
    {
    if(ind>=n)
        return 0;
    if(dp[prev+1]!=-1)
        return dp[prev+1];
    int take=0;
    int nottake=solve(temp,dp,ind+1,prev,n);
        
    if(prev==-1 || (temp[prev]<0 && temp[ind]>=0) || (temp[prev]>=0 && temp[ind]<=0))
        take=1+solve(temp,dp,ind+1,ind,n);
    return dp[prev+1]=max(take,nottake);
}
    
    
int wiggleMaxLength(vector<int>& nums) {
    int n=nums.size();
    if(n<2)
        return n;
    vector<int> temp;
    
    for(int i=1;i<nums.size();i++)
    {
        int diff=nums[i]-nums[i-1];
        if(diff!=0)
            temp.push_back(diff);
    }
    vector<int> dp(n,-1);
    int size=temp.size();
    return 1+solve(temp,dp,0,-1,size);
 }
};
    