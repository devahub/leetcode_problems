class Solution {
public:
    
    //// brute force----->
    
//     int subarraysDivByK(vector<int>& nums, int k) {
//         int c=0;
        
//         for(int i=0;i<nums.size();i++){
//            int sum=0;
//             for(int j=i;j<nums.size();j++){
//                 sum+=nums[j];
            
//             if(sum%k==0){
//                 c++;
//             }
//         }
//     }
//         return c;
//     }
// };
    
    
    
    
    //  approach---->optimal
    
    
    int subarraysDivByK(vector<int>& nums, int k){
        int n=nums.size();
        int c=0;
        unordered_map<int,int>mp;
        int sum=0;
        mp[0]++;
        
        for(auto x:nums){
         sum+=x;
            
         if(mp[(sum%k+k)%k]>0)
         {
         c+=mp[(sum%k+k)%k];
         }
            
        mp[(sum%k+k)%k]++;
    
        }
        return c;
    }
};