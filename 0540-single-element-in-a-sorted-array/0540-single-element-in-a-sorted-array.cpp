class Solution {
public:
    
    // using map-->
    
//     int singleNonDuplicate(vector<int>& nums) {
//         unordered_map<int,int>mp;
        
//         for(auto i:nums)mp[i]++;
        
//         for(auto i:mp){
//             if(i.second==1){
//                 return i.first;
//             }
//         }
//         return -1;
//     }
// };
    
    
    // using binary search---->
    
     int singleNonDuplicate(vector<int>& nums){
            int i=0;
            int j=nums.size()-1;
         
            if(nums.size()==1) return nums[0];
            if(nums[0] != nums[1]) return nums[0];
            if(nums[j] != nums[j-1]) return nums[j];
            
         
         while(i<=j){
             int mid=i+(j-i)/2;
             
             if(mid%2==0){
                if(nums[mid] == nums[mid+1])
                    i = mid+1;
                else
                    j = mid-1;  
             }
             
             else if(mid%2!=0){
                if(nums[mid] == nums[mid+1])
                    j = mid-1;
                else
                    i = mid+1;
             }
             
        if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1])
                return nums[mid];
             
         }
        return -1;    
     }
};
    
    