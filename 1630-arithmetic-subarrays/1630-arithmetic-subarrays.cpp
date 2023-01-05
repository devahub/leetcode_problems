class Solution {
public:
    
    bool isarith(vector<int> nums, int l, int r){
        sort(nums.begin()+l,nums.begin()+r+1);
        int cd = nums[l+1] - nums[l];
        for(int i=l;i<r;i++){
           if(nums[i + 1] - nums[i] != cd) 
               return false;
        }
    return true;
    }
    
    
    
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        int n=l.size();
        
        for(int i=0;i<n;i++)
        {
            ans.push_back(isarith(nums,l[i],r[i]));   
        }
        
        return ans;
    }
};