class Solution {
public:
     // brut force---->
    
  // brut force---->
    
//     int subarraySum(vector<int>& nums, int k)
//     {
//         int c=0;
        
//     for(int i=0;i<nums.size();i++)
//     {
//         int sum=0;
//         for(int j=i;j<nums.size();j++){
//             sum+=nums[j];
            
//             if(sum==k){
//                 c++;
//             }
//         }
//     }
//         return c;
//     }
// };
    
    
    
    
     int subarraySum(vector<int>& nums, int k) {
        int c = 0;
        int currSum = 0;
        int n = nums.size();
        
         if(n==0) return 0;
        unordered_map<int, int> mp;
        
         for(int i=0;i<n;i++){
            currSum += nums[i];
            
            if(currSum == k) 
            {
                c++;
            }
             
            if(mp[currSum-k]!=0) 
            {
                c += mp[currSum-k];
            }
             
            mp[currSum]++;
        }
        return c;
    }
};