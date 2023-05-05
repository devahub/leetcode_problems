class Solution {
public:
    
//     if array is sorted and rotated then, there is only 1 break point where (nums[x] > nums[x+1]),
// if array is only sorted then, there is 0 break point.
    
    bool check(vector<int>& nums) {
        int c=0;
        int n=nums.size();
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[(i+1)%n]){
                c++;
            }
        }
        return (c<=1);
    }
};