class Solution {
public:
    long long countSubarrays(vector<int>& nums, int mink, int maxk) {
        long res=0;
        bool minf=false;
        bool maxf=false;
        int start = 0, minStart = 0, maxStart = 0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<mink || nums[i]>maxk){
                minf=false;
                maxf=false;
                start=i+1;
            }
             if (nums[i] == mink) {
                minf = true;
                minStart = i;
            }
            if (nums[i] == maxk) {
                maxf = true;
                maxStart = i;
            }
            if (minf==true && maxf==true) {
                res += (min(minStart, maxStart) - start + 1);
            }
            
        }
        
        return res;
    }
};