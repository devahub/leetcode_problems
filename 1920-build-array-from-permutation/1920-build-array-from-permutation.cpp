class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] < i) {
                nums[i] = nums[i]*1024 + nums[nums[i]]/1024;
                continue;
            }
            nums[i] = nums[i]*1024 + nums[nums[i]];
        }
        for(int i=0; i<nums.size(); i++) {
            nums[i] = nums[i] % 1024;
        }
        return nums;
    }
};