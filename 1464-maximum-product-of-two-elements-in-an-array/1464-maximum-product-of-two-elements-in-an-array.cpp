class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=0;
        int pr=1;
        
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                pr=(nums[i]-1)*(nums[j]-1);
                maxi=max(maxi,pr);
            }
        }
        
        return maxi;
    }
};