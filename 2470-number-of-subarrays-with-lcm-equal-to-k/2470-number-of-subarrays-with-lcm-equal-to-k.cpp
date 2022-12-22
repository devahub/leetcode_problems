class Solution
{
    public:
    
    
    
    
//     long _lcm(long a, long b) {
//         return (a * b) / __gcd(a, b);
//     }
    
//     int subarrayLCM(vector<int>& nums, int k) {
//         long count = 0, lcm, n = nums.size();
        
//         for(int i = 0; i < n; i++) {
//             lcm = nums[i];
//             for(int j = i; j < n; j++) {
//                 lcm = _lcm(lcm, nums[j]);
//                 if(lcm == k)
//                     count++;
//                 if(lcm > k)
//                     break;
//             }
//         }
        
//         return count;
//     }
// };
    
    
    
    
    
    
    
     int subarrayLCM(vector<int>& nums, int k) {
        int size=nums.size(),count=0;
        for(int i=0;i<size;i++){
        int LCM=nums[i];
            for(int j=i;j<size;j++){
                LCM=lcm(LCM,nums[j]);
                if(LCM==k)
                    count++;
                else if(LCM>k)
                    break;
            }
        }
        return count;
    }
};