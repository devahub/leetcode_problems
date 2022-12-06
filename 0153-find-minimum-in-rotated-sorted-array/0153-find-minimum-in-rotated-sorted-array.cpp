class Solution {
public:
    
    // brute force----->
    
//     int findMin(vector<int>& nums) {
//         int mini=INT_MAX;
        
//         for(auto i:nums){
//             mini=min(mini,i);
//         }
//         return mini;
//     }
// };
    
    
    
    
    // binary search--------->
    
    int findMin(vector<int>& nums){
        int l=0;
        int h=nums.size()-1;
        int ans=INT_MAX;
        
        while(l<=h){
            int mid=l+(h-l)/2;
            
            if(nums[l]<=nums[mid]){
                ans=min(ans,nums[l]);
                l=mid+1;
            }
            else if(nums[mid]<=nums[h]){
                ans=min(ans,nums[mid]);
                h=mid-1;
            }
        }
    return ans;
    }
};