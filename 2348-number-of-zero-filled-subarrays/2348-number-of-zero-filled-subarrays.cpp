class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long contCount = 0;
        long long subarrays = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                contCount++;
                subarrays += contCount;
            }
            else{
                contCount=0;
            }
        }
        return subarrays;
    }
};