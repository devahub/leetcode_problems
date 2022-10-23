class Solution {
public:

    
    int subarrayGCD(vector<int>& nums, int k) {
        int c=0;
        
        for(int i=0;i<nums.size();i++){
            int g=nums[i];
            for(int j=i;j<nums.size();j++){
                if(nums[j]%k!=0)
                    break;
                
                g=__gcd(g,nums[j]);
                if(g==k){
                    c++;
                }
            }
        }
        return c;
    }
};