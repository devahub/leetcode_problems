class Solution {
public:
    
    // using hashmap----->
    
//     int missingNumber(vector<int>& nums) {
//         map<int,int>mp;
        
//         for(auto i:nums){
//             mp[i]++;
//         }
        
        
        
//         for(int i=0;;i++){
//             if(mp[i]==0){
//                 return i;
//             }
//         }
//         return -1;
//     }
// };
    
    
    
    
    
     int missingNumber(vector<int>& nums){
               
           int n = nums.size();
            sort(nums.begin(), nums.end());

            int ans = n;

            for (int i = 0; i < n; i++)
            {

                if (nums[i] != i)
                {
                    ans = i;
                    break;
                }
            }

            return ans;
     }
};