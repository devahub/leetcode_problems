class Solution {
public:
    
    //   [100,4,200,1,3,2]
    
    //  1 2 3 4 100 200
    
    
    // 1 10 20 22
    
    
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
    
        if(n==0) return 0;
    sort(nums.begin(),nums.end());
    int count=1;
    int ans=1;
    for(int i=0;i<n-1;i++)
    {
        if(nums[i]+1==nums[i+1])
            count++;
        else if(nums[i]!=nums[i+1])
            count=1;
        ans=max(ans,count);
    }
    return ans;
    }
};