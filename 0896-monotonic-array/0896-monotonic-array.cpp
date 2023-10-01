class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int inc=1;
        int dec=1;
        int n=nums.size();
        
        for(int i=0;i<n-1;i++){
            if(nums[i]<=nums[i+1]){
                inc++;
            }
            if(nums[i]>=nums[i+1]){
                dec++;
            }
        }
        
        if(inc==n || dec==n){
            return true;
        }
        return false;
    }
};

