class Solution
{
    public:

//  brut force------>

//         int maxi=INT_MIN;
//         for(int i=0;i < nums.size();i++){
//             int s=0;
//             for(int j=i;j < nums.size();j++){
//                 s+=nums[j];

//             maxi=max(maxi,s);
//         }
//        }
//     return maxi;
     
    
        // kadane's algorithm----------->

       int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            maxi = max(sum, maxi);
            if(sum < 0) sum = 0;
        }
        return maxi;
    }
};

