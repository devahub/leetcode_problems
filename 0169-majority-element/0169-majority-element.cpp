class Solution {
public:
  
    
//     int majorityElement(vector<int>& nums) {
//        map<int,int>mp;
        
//         for(auto i:nums){
//             mp[i]++;
//         }
//         int maxi=INT_MIN;
//         for(auto i:mp){
//             if(i.second>mp[maxi]){
//                 maxi=i.first;
//             }
//         }
//         return maxi;
//     }
// };
    
    
   // moore's voting algo
    
    int majorityElement(vector<int>& nums) {
        int ele=0;
        int count=0;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            if(count==0){
                ele=nums[i];
            }
        if(nums[i]==ele)
            count++;
        else count--;
      } 
        
        return ele;
    }
}; 