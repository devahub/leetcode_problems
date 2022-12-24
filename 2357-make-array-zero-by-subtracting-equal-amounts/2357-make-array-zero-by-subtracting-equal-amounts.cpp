class Solution {
public:
    
    
//     int minimumOperations(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int n=nums.size();
//         int c=0;
        
//         while(nums[n-1]!=0){
//             int mini=INT_MAX;
//             int ind=0;
//             for(int i=0;i<n;i++){
//                 if(nums[i]!=0){
//                     mini=nums[i];
//                     ind=i;
//                     break;
//                 }
//             }
//             for(int i=ind;i<n;i++){
//                 nums[i]=nums[i]-mini;
                
//             }
//             c+=1;
//             sort(nums.begin(),nums.end());
            
//         }
//         return c;
//     }
// };
    
    
    
    
    
    // using priority queue----------->
    
      int minimumOperations(vector<int>& nums) {
          int c=0;
          unordered_map<int,int>mp;
        
          for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=0 and mp[nums[i]]==0) 
            {
                c++;
            }
            mp[nums[i]]++;
        }
        return c;
    }
};