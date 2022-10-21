class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        int c=INT_MAX;
        int sum=0;
        
        while(j<n){
            sum+=nums[j];
            
            if(sum<target){
                j++;
            }
            
            if(sum>=target){
                while(sum>=target){
                    c=min(c,j-i+1);
                    sum=sum-nums[i];
                    i++;
                }
                j++;
            }   
        }
    return c==INT_MAX?0:c;
    }
};
    
    
   