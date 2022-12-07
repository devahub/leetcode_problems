class Solution {
public:
    
    // using extra space---->
    
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n,-1);
        
        for(int i=0;i<n;i++){
            if(nums[i]>0 && nums[i]<=n){
                v[nums[i]-1]=1;
            }
        }
        
        for(int i=0;i<n;i++){
            if(v[i]==-1){
                return i+1;
            }
        }
        return n+1;
      
    }
};
    
    
    
    
    // without using space----->
    
    